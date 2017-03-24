/*
*   Author: Jack Rus
*
*   03/2017
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(void) 
{
    int N;
    long long a;
    scanf("%i", &N);
    for (int i = 0; i < N; i++)
    {
        scanf("%lld", &a);
        a = a % 20 != 0 ? (a / 20 * 42 % 1000000007 + 2 * (a % 20)) : (a / 20 * 42 % 1000000007 - 2);
        printf("%lld\n", a);
    }
}
