#include <stdio.h>  //getchar() - https://en.cppreference.com/w/c/io/getchar 
#include <stdlib.h> 
 
#define MAXLEN 80 
 
int getline(char *buf, int buflen)//char line[], int max) 
{ 
    int c; 
    int i=0; 
    while( ( c=getchar() ) != '\n' && c != EOF) 
        if(i<buflen) 
            buf[i++] = c; 
    buf[i] = '\0'; 
    return (c==EOF) ? -1 : i;             
} 
 
static void menuDisplay(int n, const char *const items[]) 
{ 
    printf("Your choices are:\n"); 
    for (int i = 1; i <= n; i++) 
        printf("\t%i) %s\n", i, items[i-1]); 
    printf("Or type 0 to quit: "); 
} 
 
static int menuChoice(int n, const char *const items[]) 
{ 
    int num; 
    char line[MAXLEN + 1]; 
    menuDisplay(n, items); 
    while (getline(line, MAXLEN) != -1) 
    { 
        if(sscanf(line, "%i", &num) ==1 && 0 <= num && num <= n) 
            return num; 
        else 
            printf("Enter a value between 0 and %i: ", n); 
    } 
     
    return EXIT_SUCCESS; 
} 
 
void menuProcess(int numMenuChoices, const char *const menuItems[], void (*fPtrs[])(void)) 
{ 
    int choice; 
    while ((choice = menuChoice(numMenuChoices, menuItems)) != 0) 
        fPtrs[choice -1](); //call to function 
} 