/*
*     Author: Jack Rus
*/ 

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void insertionSort(int N, int arr[]) 
{
    int i,j, count = 0;
    int value;
    for(i=1;i<N;i++)
    {
        value = arr[i];
        j=i;
        while(j>0 && value<arr[j-1])
        {
            arr[j]=arr[j-1];
            j=j-1;
            arr[j]=value;
            count++;
        }
    }
    printf("%i", count);
}

int main(void) {

    int N;
    scanf("%d", &N);
    int arr[N], i;
    for(i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    insertionSort(N, arr);
    return 0;
}
