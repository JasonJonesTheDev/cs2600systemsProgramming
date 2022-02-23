// C program to demonstrate explicit type casting

#include <stdio.h>

int main()

{

    double x = 1.2; // change to 1.8 note value is not rounded. decimal value is removed!

    // Explicit conversion from double to int

    int sum = (int)x + 1; // developer indicates that they want variable x to be typecast, treated as an (int) in this case

    printf("sum = %d", sum);

    return 0;
}