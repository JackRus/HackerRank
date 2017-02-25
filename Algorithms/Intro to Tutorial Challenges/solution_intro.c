#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(void) 
{
    int k, i, index; 
    scanf("%d", &k);
    scanf("%d", &i);
   
    int ar[i];
    for (int j = 0; j < i; j++)
    {
        scanf("%d", &ar[j]);
        if (ar[j] == k)
            index = j;
    }
    printf("%i\n", index);
    return 0;
}
