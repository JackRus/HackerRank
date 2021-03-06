/*
*   Author: Jack Rus
*   02/2017
*/


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>


void insertionSort(int ar_size, int ar[]) 
{
    for (int i = 1; i < ar_size; i++)
    {
            int sub = ar[i];
            int j = i;
            while (j > 0 && ar[j-1] > sub)
            {
                ar[j] = ar[j-1];
                j--;
                ar[j] = sub;
            }
            for (int n = 0; n < ar_size; n++)
                printf("%i ", ar[n]);
            printf("\n");
    }
}

int main(void) 
{
    int _ar_size;
    scanf("%d", &_ar_size);
    int _ar[_ar_size], _ar_i;
    for(_ar_i = 0; _ar_i < _ar_size; _ar_i++) 
    { 
    scanf("%d", &_ar[_ar_i]); 
    }

    insertionSort(_ar_size, _ar);
   
    return 0;
}
