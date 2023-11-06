/*
Branch task-1
    Вывести квадратную матрицу по заданному N
*/
#include <stdio.h>

#define N 3

int main(){
    int array[N][N] = { {1, 2, 3},
                        {4, 5, 6},
                        {7, 8, 9}};
    for (int j = 0; j < N; j++){
        for (int i = 0; i < N; i++)
            printf("%-2d", array[j][i]);     
        printf("\n");   
    }
    return 0;
}