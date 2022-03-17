//gcc testTable.c qsort_compfuncs.c qsortMain.c 
#include <stdlib.h> 
#include "testTable.h" 
 
int main(){ 
    int compLong(const void * tablePtr1, const void * tablePtr2); 
    int compString(const void * tablePtr1, const void * tablePtr2); 
 
    qsort(longTable, longTableEntries, sizeof(longTable[0]), compLong); 
    printLongTable(longTable, longTableEntries); 
    qsort(stringTable, stringTableEntries, sizeof(stringTable[0]), compString); 
    printStringTable(stringTable, stringTableEntries); 
 
    return EXIT_SUCCESS; 
} 