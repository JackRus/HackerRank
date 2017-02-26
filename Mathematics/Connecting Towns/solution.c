
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
    int ar[1000][1000];
    unsigned long answer[t+1];
    
    // gets info for each case
    for (int j = 1; j <= t; j++)
    {
        // gets number of cities
        int cities;
        scanf("%i", &cities);
        ar[j][0] = cities;
        
        // extracting numbers from input
        int number; 
        for (int i = 1; i < cities; i++)
        {   
            scanf("%d", &number);
            ar[j][i] = number;
            //printf("ar[%i][%i] = %i\n", j, i, ar[j][i] );
        }
        
        // geting the number of routes
        long cases = 1;
        for (int i = 1; i < cities; i++)
        {
            cases = (cases * ar[j][i]) % 1234567;
        }
        answer[j] = cases;
    }
    for (int i = 1; i <= t; i++)
    {
        printf("%ld\n", answer[i]);
    }
            
}
