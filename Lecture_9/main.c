//To compile use the following command --> gcc main.c add.c 

#include <stdio.h> 

#include "header.h" //add() function can be used as it included here extern not needed 

void main(void){ 

    int num1 = 10; 

    int num2 = 20; 

    printf("The result of adding %d + %d = %d\n", num1, num2, add(num1, num2)); 

} 