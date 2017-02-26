/*
*     Author: Jack Rus
*/ 


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    double l, qq, timer;
    int Q, s1, s2; 
    scanf("%lf %i %i",&l, &s1, &s2);
    scanf("%d",&Q);
    for (int i =0; i < Q; i++)
    {
        scanf("%lf",&qq);
        timer = (sqrt(2 * l * l) - sqrt(2 * qq)) / (double) abs(s1 - s2);
        printf("%.20lf\n",timer);
    }
    return 0;
}
