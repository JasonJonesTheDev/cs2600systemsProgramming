#include <stdio.h>
#include <stdarg.h> //required for variable input function

double average(int num, ...)
{ // ellipses as second param indicates this is a variable input function

    va_list valist; // va_list - from stdarg.h

    double sum = 0.0;

    int i;

    /* initialize valist for num number of arguments */

    va_start(valist, num); // think of strcpy() in this case it copies all the arguments into valist  num ~argc

    /* access all the arguments assigned to valist */

    for (i = 0; i < num; i++)
    {

        sum += va_arg(valist, int); // interpret arguments as int
    }

    /* clean memory reserved for valist */

    va_end(valist);

    return sum / num;
}

int main()
{

    printf("Average of 2, 3, 4, 5 = %f\n", average(4, 2, 3, 4, 5));

    printf("Average of 5, 10, 15 = %f\n", average(3, 5, 10, 15));
}