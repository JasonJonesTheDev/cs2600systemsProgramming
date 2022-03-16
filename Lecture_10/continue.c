#include <stdio.h>
void main()
{
    int a = 1;
    while (a < 10)
    {
        a++; // try moving this statement below the if block? what happens and why?
        if (a == 5)
        {
            continue;
        }
        printf("Statement %d\n", a);
    }
    printf("End of Program.");
}