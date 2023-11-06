/*
Branch task-3
    Заполнить верхний треугольник матрицы 1, а нижний 0
*/

#include <stdio.h>
#define N 10

int main(){
    int array[N][N] = {0};

    for (int j = 0; j < N; j++){
        for (int i = 0; i < N; i++)
            printf("%-2d", array[j][i]);     
        printf("\n");   
    }
    printf("\n"); 
    
    for (int j = 0; j < N; j++){
        for (int i = j; i < N; i++)
            array[j][i] = 1;
    }

    for (int j = 0; j < N; j++){
        for (int i = 0; i < N; i++)
            printf("%-2d", array[j][i]);     
        printf("\n");   
    }

    printf("\n\n"); 
    return 0;
}