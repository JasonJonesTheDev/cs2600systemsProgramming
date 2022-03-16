#include <stdio.h>
void main(void)
{
    // Declare Arrays
    int declare_oneDimArray[10]; // 10 integers
    int declare_twoDimArray[10][10]; // 100 integers
    int declare_threeDimArray[10][10][10]; // 1000 integers
    // Declare and initialize
    int oneDim[4] = {0, 1, 2, 3};
    // recommend this way as it easier to understand
    int twoDim[3][2] = {{0, 1}, {2, 3}, {4, 5}}; // Can also be written as int twoDim[3][2] ={0,1,2,3,4,5};
    int threeDim[2][3][4] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10,
                             11, 12, 13, 14, 15, 16, 17, 18, 19,
                             20, 21, 22, 23};
    // Initializing a multiDim array
    for (int row = 0; row < 10; row++)
    {
        for (int colm = 0; colm < 10; colm++)
        {
            for (int plane = 0; plane < 10; plane++)
            {
                declare_threeDimArray[row][colm][plane] = row + colm + plane;
                // Accessing Multi Dim array by printing them out
                printf("array[%d][%d][%d] = %d ", row, colm, plane, declare_threeDimArray[row][colm][plane]);
            }
            printf("\n");
        }
        printf("\n");
    }
}