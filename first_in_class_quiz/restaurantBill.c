/*For the Restaurant Bill program, I will first declare all the variables.
Floats will be needed across the board since we are dealing with money and 2 points of precision.
The program will then take the user input for the tax and tip amount.
Then the program will then randomly select an option 1-4.
I will then use a switch statement to choose the right food option.
Finally, the program prints the total amount.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
// function declaration for calcualtor 
// handles all the calculations for the total amount 
// given teh taxed amount plus tip amount
float calculator(float tax, float tip, float food);
int main()
{
    // Variable declarations
    float tax = 0;
    float tip = 0;
    float salad = 9.95;
    float soup = 4.55;
    float sandwich = 13.25;
    float pizza = 22.35;
    float total;
    int switchCase = 0;
    // set time
    time_t t;
    // Init random number generator
    srand((unsigned)time(&t));
    // print input request and gather input
    printf("Tax Percent: ");
    scanf("%f", &tax);
    // convert percentage to dec repeat for tip
    tax = tax * 0.01;
    // printf("%f", tax);
    printf("Tip Percent: ");
    scanf("%f", &tip);
    tip = tip * 0.01;
    // set switchCase
    switchCase = rand() % 4;
    // call switch statement to 
    // corrilated randon number, print case, call calculator
    switch (switchCase)
    {
    case 0:
        printf("Salad ");
        total = calculator(tax, tip, salad);
        break;
    case 1:
        printf("Soup ");
        total = calculator(tax, tip, soup);
        break;
    case 2:
        printf("Sandwich ");
        total = calculator(tax, tip, sandwich);
        break;
    case 3:
        printf("Pizza ");
        total = calculator(tax, tip, pizza);
        break;
    }
    // print total
    printf(" Total: %.2f", total);
    return 0;
}
float calculator(float tax, float tip, float food)
{
    float total;
    // printf("%0.2f", food);
    total = (food + (food * tax));
    total = ceilf(total * 100) / 100;
    // printf("Total after Tax: %f", total);
    total = ceilf(total * 100) / 100;
    total = total + (total * tip);
    // printf("Total after Tip: %f", total);
    return total;
}