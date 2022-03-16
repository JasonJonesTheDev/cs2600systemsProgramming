// gcc comparelong.c libsearch.c
#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int main(int argc, char *argv[])
{
    // function prototype - comparelong.c
    int compareLong(const void *target_ptr, const void *table_ptr);
    long longTable[MAX]; // array of long  - will need to have a compare function for data type long
    long *ptr; // pointer to item found
    int target; // target value to search for
    // initialize the array  0,1,2,...99
    for (int i = 0; i < MAX; i++)
    {
        longTable[i] = i;
    }
    // Check if arguments passed in through console are in the array
    for (int i = 1; i < argc; i++)
    {
        if (sscanf(argv[i], "%li", &target) == 1) // read argument as type long and set to variable target
        {
            ptr = bsearch(&target, longTable, MAX, sizeof(longTable[0]), compareLong);
            if (ptr == NULL)
                printf("Did NOT find %li\n", target);
            else
                printf("Found %li in array located at %i\n", target, ptr - longTable);
        }
    }
    return EXIT_SUCCESS;
}