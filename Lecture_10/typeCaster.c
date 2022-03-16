// Compiler will automatically typecast to move to larger size. Model shown below
/*     bool -> char -> short int -> int ->
       unsigned int -> long -> unsigned ->
       long long -> float -> double -> long double  */
// An example of implicit conversion THIS IS AUTOMATICALLY CONVERTED BY COMPILER
#include <stdio.h>
#include <time.h>
// #define type_name(expr) \ 
//     (_Generic((expr), \ 
//               char                              \
//               : "char", unsigned char           \
//               : "unsigned char", signed char    \
//               : "signed char", \ 
//               short                             \
//               : "short", unsigned short         \
//               : "unsigned short", \ 
//               int                               \
//               : "int", unsigned int             \
//               : "unsigned int", \ 
//               long                              \
//               : "long", unsigned long           \
//               : "unsigned long", \ 
//               long long                         \
//               : "long long", unsigned long long \
//               : "unsigned long long", \ 
//               float                             \
//               : "float", \ 
//               double                            \
//               : "double", \ 
//               long double                       \
//               : "long double", \ 
//               void *                            \
//               : "void*", \ 
//               default                           \
//               : "?"))
int main()
{
    int x = 10; // integer x
    char y = 'a'; // character c
    int copy = 0;
        // y implicitly converted to int. ASCII
        // value of 'a' is 97
        x = x + y; // adding two different types compiler will typecast with model above char->int
    // x is implicitly converted to float
    float z = x + 1.0;
    printf("x = %d, z = %f ", x, z);
    // typeof(x) copy = x;
    printf("Type of x: %d", copy);
    return 0;
}