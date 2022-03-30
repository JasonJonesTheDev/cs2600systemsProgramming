#include <stdio.h>

int main()
// __LINE__ and __file__ can be used for testing purposes. 
{
    printf("This code is on line %d, in file %s\n", __LINE__, __FILE__);
#line 10
    printf("This code is on line %d, in file %s\n", __LINE__, __FILE__);
#line 20 "hello.cpp"
    printf("This code is on line %d, in file %s\n", __LINE__, __FILE__);
    printf("This code is on line %d, in file %s\n", __LINE__, __FILE__);
}