#include <string.h> 
int compLong(const void * tablePtr1, const void * tablePtr2) 
{ 
    long value1 = * (long *) tablePtr1; 
    long value2 = * (long *) tablePtr2; 
 
    return (value1 == value2) ? 0 : ((value1 < value2) ? -1 : 1); 
} 
int compString(const void * tablePtr1, const void * tablePtr2) 
{ 
    return strcmp(* (char **) tablePtr1, * (char **) tablePtr2); 
} 