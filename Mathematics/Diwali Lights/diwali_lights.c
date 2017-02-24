#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(void) 
{
    int t;
    scanf("%i", &t);
    long lights;
    int two = 1;
    while (t--)
    {
        scanf("%ld", &lights);
        two = 1;
        for (int i = 1; i <= lights; i++)
        {
            two = (two * 2) % 100000;
        }
        printf("%i\n", two -1);
    }
}
