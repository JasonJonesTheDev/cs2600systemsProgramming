#include <stdio.h> 
#include "MathFunc.h" 
   
int main() 
{ 
    double a = 7.4; 
    int b = 99; 
  
    printf("a + b = %.1f\n", Add(a, b)); 
    printf("a - b = %.1f\n", Subtract(a, b)); 
    printf("a * b = %.1f\n", Multiply(a, b)); 
    printf("a / b = %f\n", Divide(a, b)); 
  
    return 0; 
} 