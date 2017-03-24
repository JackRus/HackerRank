/*
*     Author: Jack Rus
*/ 

#include <math.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
    int n, d; 
    scanf("%d %d", &n, &d);
    int arr[n];
    for(int arr_i = 0; arr_i < n; arr_i++)
        scanf("%d",&arr[arr_i]);
    
    d = d % n;
    int sub;
    // moves to the left
    if (d < n/2)
    {
        for (int i = 0; i < d; i++)
        {
            sub = arr[0];
            for (int j = 1; j < n; j++)
                arr[j-1] = arr[j];
            arr[n-1] = sub;
        }
    } 
    // moves to the right
    else 
    {
        for (int i = 0; i < n - d; i++)
        {
            sub = arr[n-1];
            for (int j = n -1; j > 0; j--)
                arr[j] = arr[j-1];
            arr[0] = sub;
        }
    }
    for (int i = 0; i < n; i++)
        printf("%i ", arr[i]);
    return 0;
}
