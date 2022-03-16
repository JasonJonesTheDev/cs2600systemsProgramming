#include <stdio.h>
void main()
{
    int a = 1;
    while (a <= 10)
    {
        if (a == 5)
            break;
        printf("Statement %d\n", a);
        a++;
    }
    printf("End of Program.");
}