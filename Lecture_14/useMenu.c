//gcc promptMenu.c useMenu.c functions.c  
#include <stdio.h> 
#include <stdlib.h> 
#include "functions.h" 
 
//constant array of const strings. The String values can not be updated and no new entries are permitted 
const char * const menuEntries[] = {"Add Function", "Subtract Function", "Print Function", "Exit Function"}; 
 
//array of Ptrs, pointing to functions - This is a complex data type 
void (*menuFuncPtrs[])(void) = { addFunc, subFunc, printFunc, exitFunc }; 
 
int main(){ 
    void menuProcess(int, const char *const[], void (*[])(void)); 
    const int choices = sizeof(menuFuncPtrs)/sizeof(menuFuncPtrs[0]); 
    menuProcess(choices, menuEntries, menuFuncPtrs); 
    return EXIT_SUCCESS; 
}  