/*
Branch task-4
    Заполнить матрицу числами от 1 до N^2 улиткой
*/

#include <stdio.h>
#include <math.h>
#define N 5

int main(){
    int array[N][N] = {0};

    for (int j = 0; j < N; j++){
        for (int i = 0; i < N; i++)
            printf("%-2d ", array[j][i]);     
        printf("\n");   
    } 
    printf("\n"); 

    //int number = 0;

    //int i = 0;
    //int j = 0;

    // int beginI = 0;
    // int endI = N - 1;
    // int beginJ = 0;
    // int endJ = N - 1;

    // for (i = beginI; i <= endI; i++)
    // {
    //     array[j][i] = ++number;
    // }
    // i = endI;
    // j = beginI + 1;


    // for (j = beginJ; i <= endJ; j++)
    // {
    //     array[j][i] = ++number;
    // }
    // j = i;
    // beginI = abs(beginI - )
    // for (i = beginI; i <= endI; i++)
    // {
    //     array[j][i] = ++number;
    // }

    int number = 1;
    int rowBegin = 0;
    int rowEnd = N - 1;
    int colBegin = 0;
    int colEnd = N - 1;

    while (number <= N*N){
        for (int i = colBegin; i <= colEnd; i++)
            array[rowBegin][i] = number++;
        rowBegin++;

        for (int i = rowBegin; i <= rowEnd; i++)
            array[i][colEnd] = number++;
        colEnd--;

        for (int i = colEnd; i >= colBegin; i--)
            array[rowEnd][i] = number++;
        rowEnd--;

        for (int i = rowEnd; i >= rowBegin; i--)
            array[i][colBegin] = number++;
        colBegin++;
    }



    for (int j = 0; j < N; j++){
        for (int i = 0; i < N; i++)
            printf("%-2d ", array[j][i]);     
        printf("\n");   
    }

    printf("\n\n"); 
    return 0;
}