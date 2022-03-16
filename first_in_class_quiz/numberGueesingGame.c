/*
My approach to creating the number guessing game will be to first map out the programs needs
Variables:
int for the number to guess
int for the number guessed
Program design
output menu
gather input
switch statement for selection
option 1
ask user to guess compair to a randomly generated num 1-10
if guess = num to guess output win
else if guess != num to guess output try again and print weather guess was higher or lower
else if user enters a q break to main menu
option 2 change the max number
this mean a rand function wil be needed to set the random number when user changes the size
option 3 return 0/ quit
ALright so apparently I could have read the instructions a bit more clearly because I needed to write far more
code and functionality than I initilly thought.
There were some conditions in the 3rd menu option that made things a bit more involved.
I needed to use a data structure that stored each games result and number of guesses.
I thought of a few options like a map, or and array of pairs, or a 2d array, or linked list.
I deciced to look up and learn somthing new with c and that was to use what I learned in class with the ragged array.
I used this coupled with a few functions to make my own automatically increasing array.
I needed to create a dynamic array, first by creating a struct with a ragged array of int.
This dynamic array automatically resizes when inserting new elements into the array.
If the used and sized become equal the array will double in size.
Then I clean up my array by using the free functino that sets it back to 0, and frees up the memory with free.
I then realized I would need two game loops, one for the main gain and one for the guessing portion.
Varilabes also dramatically increased over time and I ended up with 11 total.

*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
// struct declaration with dynamic array and size variables to track array size.
typedef struct
{
    int *array;
    size_t used;
    size_t size;
} Array;
// init array dynamically allocates memory for the new array.
void initArray(Array *a, size_t initialSize)
{
    a->array = malloc(initialSize * sizeof(int));
    a->used = 0;
    a->size = initialSize;
}
// insert will insert then check to see if array is in need of growing if so it will double.
void insertArray(Array *a, int element)
{
    if (a->used == a->size)
    {
        a->size *= 2;
        a->array = realloc(a->array, a->size * sizeof(int));
    }
    a->array[a->used++] = element;
}
// freeArray will free up the memory then set the array to null and the size variables to 0.
void freeArray(Array *a)
{
    free(a->array);
    a->array = NULL;
    a->used = a->size = 0;
}
int main()
{
    // The number we compare in the game.
    int computerNum = 0;
    int playerNum = 0;
    // file inpout
    FILE *fptr;
    fptr = fopen("save_user_max_number", "w");
    if (fptr == NULL)
    {
        printf("Error!");
        exit(1);
    }
    // array initializations.
    Array winLoss;
    initArray(&winLoss, 5);
    Array numberOfGuessesPerGame;
    initArray(&numberOfGuessesPerGame, 5);
    // game loop bools.
    int gameCount = 0;
    bool gameRun = true;
    // set time.
    time_t t;
    // Initialize random number generator.
    srand((unsigned)time(&t));
    // welcome message
    printf("Welcome to NUMBERIZOR 3000!\n\nTest your guessing skills...\n"
           "Do you think you can guess what I am thinking?\nYou think you can read my mind?\n"
           "We will see...\n\n\nPress any key to continue\n\n\n");
    getchar();
    // declare and initialize the menu selection and the default starting max of 10.
    int menuSelection = 0;
    int computerNumMax = 10;
    // main game loop true
    while (gameRun)
    {
        // initialzed the guess count here as it will be re set every time a new game is played.
        int guessCount = 0;
        printf("Press 1 to play a game\n"
               "Press 2 to change the max number\n"
               "Press 3 to quit\n");
        // take user selection.
        scanf("%d", &menuSelection);
        // guess game run loop true.
        bool guessRun = true;
        // switch statement for the main menu selection.
        switch (menuSelection)
        {
        case 1:
            // count games for print function.
            gameCount++;
            // set the computers number.
            computerNum = rand() % computerNumMax + 1;
            // guess loop
            while (guessRun)
            {
                printf("Guess a number between 1 and %d: ", computerNumMax);
                // check for q to quit if so update array and back to main.
                char input[6];
                scanf("%s", &input);
                if (input[0] == 'q')
                {
                    insertArray(&winLoss, 'L');
                    insertArray(&numberOfGuessesPerGame, guessCount);
                    break;
                }
                // conver temp input to string
                playerNum = atoi(input);
                guessCount++;
                // game logic
                if (computerNum == playerNum)
                {
                    printf("You ARE a mind reader! You Win.\n");
                    insertArray(&winLoss, 'W');
                    insertArray(&numberOfGuessesPerGame, guessCount);
                    guessRun = false;
                }
                else if (computerNum > playerNum)
                {
                    printf("Your guess is too low...\nTry again\n");
                }
                else if (computerNum < playerNum)
                {
                    printf("your guess is too high...\nTry again\n");
                }
            }
            break;
        case 2:
            printf("What is the new max?\n"
                   "Pick a number between 1 and 10000\n\n\n");
            bool maxLoop = true;
            // max number set loop
            while (maxLoop)
            {
                scanf("%d", &computerNumMax);
                if (computerNumMax > 10000)
                {
                    printf("That number is too big!\nTry a smaller number...\n");
                }
                else if (computerNumMax <= 0)
                {
                    printf("That number is too low...\nTry a bigger number...\n");
                }
                else if (computerNumMax > 0 && computerNumMax < 10001)
                    maxLoop = false;
            }
            break;
        case 3:
            printf("Thank you for playing NUMBERIZOR 3000!\n");
            // print the relevant information
            for (int i = 0; i < gameCount; i++)
            {
                printf("Game#: %d \nResult: %c\nNumber of Guesses: %d \n\n", i + 1, winLoss.array[i], numberOfGuessesPerGame.array[i]);
                fprintf(fptr, "Game#: %d \nResult: %c\nNumber of Guesses: %d \n\n", i + 1, winLoss.array[i], numberOfGuessesPerGame.array[i]);
            }
            freeArray(&winLoss);
            freeArray(&numberOfGuessesPerGame);
            gameRun = false;
        default:
            break;
        }
    }
    fclose(fptr);
    return 0;
}