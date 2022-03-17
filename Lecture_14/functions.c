#include <stdio.h> 
#include "functions.h" 
 
#define ANNOUNCE(x) printf("In the functions %s\n",x)   //This is a macro 
 
void addFunc(void){  
    ANNOUNCE("addFunc");  
    } 
void subFunc(void){  
    ANNOUNCE("subFunc");  
    } 
void printFunc(void){  
    ANNOUNCE("printFunc");  
    } 
void exitFunc(void){  
    ANNOUNCE("exitFunc");  
    } 