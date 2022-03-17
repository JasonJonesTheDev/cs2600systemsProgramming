// Creating an object file run:  gcc -c .\mathFunc.c   --> this will create mathFunc.o

// Usually you will have multiple object files and then you can archive them in one file
// We will just archive the one object file we have created.
// Archive object file by run: ar -rc libMath.a mathFunc.o
//-rc creates archive without a warning and replaces pre-existing object files in the library with the same name.
// This will create libMath.a the archive file containing the object file

// Run: gcc mathFuncMain.c -L. -lmath
//  -L - Look in this folder. The .(dot) following 'L' means the present folder
//  -l - link with the file. In this case GCC will automatically prepend "lib" hence "libMath" is written as "math"

// Alternatively, you can compile with the object file/files directly without archiving.
// gcc mathFuncMain.c mathFunc.o

#include "MathFunc.h"

double Add(double a, double b)
{
    return a + b;
}
double Subtract(double a, double b)
{
    return a - b;
}
double Multiply(double a, double b)
{
    return a * b;
}
double Divide(double a, double b)
{
    return a / b;
}