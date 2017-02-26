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
    // taking N strings
    int n; 
    scanf("%d", &n);
    char ar[n][20];
    for (int i = 0; i < n; i++)
    {
        scanf("%s", &ar[i][0]);
    }
    
    // taking Q strings
    int q; 
    scanf("%d", &q);
    char ar2[q][20];
    for (int i = 0; i < q; i++)
    {
        scanf("%s", &ar2[i][0]);
    }
    
    // comparing strings
    int count[q];
    for (int i = 0; i < q; i++)
    {
        count[i] = 0;
        for (int j = 0; j < n; j++)
        {
            if (strcmp(ar2[i], ar[j]) == 0)
            {
                count[i]++;
            }
        }
    }
    // printing
    for (int i = 0; i < q; i++)
        printf("%i\n", count[i]);
    
    return 0;
}
