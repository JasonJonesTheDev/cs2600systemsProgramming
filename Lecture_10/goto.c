#include <stdio.h>
void main()
{
    printf("Statement 1\n");
    printf("Statement 2\n");
    printf("Statement 3\n");
    goto skip;
    printf("Statement 4\n");
    printf("Statement 5\n");
skip:
    printf("End of Program\n");
}