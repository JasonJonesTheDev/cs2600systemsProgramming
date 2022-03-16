#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
#define row 3
#define col 3
bool loShuTest(int twoDarr[][col]);
void printLoShu(int twoDarr[][col]);
int main(void)
{
    int correctLoShu[row][col] = {{4, 9, 2}, {3, 5, 7}, {8, 1, 6}};
    int inCorrectLoShu[row][col] = {{9, 4, 2}, {3, 5, 7}, {8, 1, 6}};
    int dupCorrectLoShu[row][col] = {{9, 9, 2}, {9, 6, 7}, {8, 1, 6}};
    // printf("%d", loShuTest(correctLoShu));
    // loShuTest(correctLoShu);
    // loShuTest(inCorrectLoShu);
    // loShuTest(dupCorrectLoShu);
    int randLoShu[row][col];
    int count = 0; 
    srand(time(NULL));
    while (true)
    {
        count++;
        int usedNums[10] = {0};
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                int num = rand() % 9 + 1;
                while (usedNums[num])
                {
                    num = rand() % 9 + 1;
                }
                randLoShu[i][j] = num;
                usedNums[num] = 1;
            }
        }
        if (loShuTest(randLoShu) == true)
        {
            printf("Lo Shu square generated on square: %d \nLo Shu square contense: \n", count);
            printLoShu(randLoShu);
            return 0;
        }
    }
    return 0;
}
bool loShuTest(int twoDarr[][col])
{
    // check sum of rows
    for (int i = 0; i < row; i++)
    {
        int rowSum = 0;
        for (int j = 0; j < col; j++)
        {
            rowSum += twoDarr[i][j];
            // printf("%d", twoDarr[i][j]);
        }
        // printf("%d", rowSum);
        if (rowSum != 15)
            return false;
    }
    // check sum of column
    for (int i = 0; i < row; i++)
    {
        int colSum = 0;
        for (int j = 0; j < col; j++)
        {
            colSum += twoDarr[j][i];
            // printf("%d", twoDarr[j][i]);
        }
        // printf("%d", colSum);
        if (colSum != 15)
            return false;
    }
    // check sum of diagonal upper left to bottom right
    int diagonalSumOne = 0;
    for (int i = 0; i < col; i++)
    {
        diagonalSumOne += twoDarr[i][i];
    }
    // printf("%d", diagonalSumOne);
    if (diagonalSumOne != 15)
    {
        return false;
    }
    // check sum of diagonal bottom left to upper right
    int diagonalSumTwo = 0;
    int j = row - 1;
    for (int i = 0; i < col; i++, j--)
    {
        diagonalSumTwo += twoDarr[j][i];
    }
    if (diagonalSumTwo != 15)
    {
        return false;
    }
    //printf("%d", diagonalSumTwo);
    return diagonalSumOne == diagonalSumTwo;
    // check for duplicates of nums 1-9
    int *duplicates;
    duplicates = &twoDarr[0][0];
    // for (int i = 0; i < 9; i++)
    // {
    //     printf("%d", duplicates[i]);
    // }
    for (int i = 0; i < 9; i++)
    {
        // printf("i = %d dup = %d \n", i, duplicates[i]);
        for (int j = i + 1; j < 9; j++)
        {
            // printf("j = %d dup = %d \n", j, duplicates[j]);
            if (duplicates[i] == duplicates[j])
            {
                // printf("%d ", duplicates[j]);
                return false;
            }
        }
    }
    // passes all checks
    return true;
}
void printLoShu(int twoDarr[row][col])
{
    for (int i = 0; i < row; i++)
    {
        printf("[ ");
        for (int j = 0; j < col; j++)
        {
            printf("%d ", twoDarr[i][j]);
        }
        printf("]");
        printf("\n");
    }
}