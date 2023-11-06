/*
Branch task-2
    Вывести заданный массив размером N в обратном порядке
*/

#include <stdio.h>

#define N 11

int main(){
    int array[N] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};

    printf("Input array:  ");  
    for (int i = 0; i < N; i++)
        printf("%-2d ", array[i]);

    int temp;
    for (int i = 0; i < N / 2; i++)
    {
        temp = array[i];
        array[i] = array[N - 1 - i];
        array[N - 1 - i] = temp;
    }

    printf("\nOutput array: ");  
    for (int i = 0; i < N; i++)
        printf("%-2d ", array[i]);

    printf("\n\n");
    return 0;
}