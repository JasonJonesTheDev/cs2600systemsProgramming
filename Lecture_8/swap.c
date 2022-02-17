#include <stdio.h> 



void swap(int *x, int *y)  //defining function called swap which swaps using pointers showing that you can
// access data outside of the scope of the current run time scope. 

{ 

    int z = *x; 

    *x = *y; 

    *y = z; 

} 





int main() 

{ 

    int a = 45, b = 35; 

    printf("Before Swap\n"); 

    printf("a = %d b = %d\n",a,b); 



    swap(&a, &b); 

     



    printf("After Swap with pass by reference\n"); 

    printf("a = %d b = %d\n",a,b); 

    return 0; 

} 



// #include <stdio.h>  //standard input output built into c library 



// typedef int number; 



//  int main() { 



//    number c; 

//    printf( "Enter a value :"); 

//    fflush(stdout);  //ECLIPSE BUG 

//    c = getchar( ); 



//    printf( "\nYou entered: "); 

//    putchar( c ); 



//    return 0; 

// } 


//STRING 

//READ/WRITE using get and put 

// #include <stdio.h> 

// int main( ) { 



//    char str[100];       //char array STRING used as buffer 



//    printf( "Enter a value :"); 

//    fflush(stdout);  //ECLIPSE BUG 

//    gets( str ); 



//    printf( "\nYou entered: "); 

//    puts( str ); 



//    return 0; 

// } 




//You define type of I/O 

//scanf and printf 



//reading two items a string and int 

// #include <stdio.h> 

// int main( ) { 



//    char str[100]; 

//    int i; 



//    printf( "Enter a value :"); 

//    fflush(stdout);  //ECLIPSE BUG 

//    scanf("%s %d", str, &i); 



//    printf( "\nYou entered: %s %d ", str, i); 



//    return 0; 

// } 



