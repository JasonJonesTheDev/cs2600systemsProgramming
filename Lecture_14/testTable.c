#include <stdio.h> 
#include <stddef.h> 
#include <stdlib.h> 
#include "testTable.h" 
 
long longTable[] = {17, 10, 89, 26, 30, 99 ,78, 11, 91, 16, 
                    87, 45, 78, 11, 45, 98, 67, 20, 60, 8 }; 
 
const int longTableEntries = sizeof(longTable)/sizeof(longTable[0]); 
 
char *stringTable[] = { "sally", "tammy", "veronica", "daphne", "vivian", 
                        "tony", "alex", "doris", "irene", "gisele"}; 
 
const int stringTableEntries = sizeof(stringTable)/sizeof(stringTable[0]); 
 
void printLongTable(long table[], int entries){ 
    for( int i =0; i < entries; i++) 
        printf("%li\n", longTable[i]); 
} 
 
void printStringTable(char * table[], int entries){ 
    for( int i =0; i < entries; i++) 
        printf("%s\n",stringTable[i]); 
} 