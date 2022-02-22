#include <stdio.h> 
int main( int argc, char *argv[] ) { 
 if( argc == 2 ) { 
 printf("Total arguments = %d\n", argc); 
 printf("The argument supplied is %s\n", argv[1]); 
 } 
 else if( argc > 2 ) { 
 printf("Total arguments = %d\n", argc); 
 printf("Too many arguments supplied.\n"); 
 printf("Third arg = %s\n", argv[2]);
 } 
 else { 
 printf("Total arguments = %d\n", argc); 
 printf("One argument expected.\n"); 
 } 
} 