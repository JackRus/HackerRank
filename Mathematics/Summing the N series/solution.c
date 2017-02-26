/*
*     Author: Jack Rus
*/ 

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(void) 
{
    // gets number of cases
    int t;
    scanf("%i", &t);
    unsigned long ar[t+1];
    
    // gets info for each case
    for (int j = 1; j <= t; j++)
    {
        // gets number of cities
        unsigned long n;
        scanf("%ld", &n);
        ar[j] = ((n % 1000000007)*(n % 1000000007)) % 1000000007;
    }
    // output
    for (int i = 1; i <= t; i++)
    {
        printf("%ld\n", ar[i]);
    }
    return 0;
}
