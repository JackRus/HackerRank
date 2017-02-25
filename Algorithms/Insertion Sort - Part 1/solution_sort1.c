#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>
void insertionSort(int ar_size, int ar[]) 
{
    int i = ar_size - 1;
    while (i > -1)
    {
            if (ar[i-1] <= ar[i])
                i--;    
            int sub = ar[i];
            int j = i;
            int check = 0;
            while (j > 0 && ar[j-1] > sub && check == 0)
            {
                check = 1;
                ar[j] = ar[j-1];
                j--;
                for (int n = 0; n < ar_size; n++)
                    printf("%i ", ar[n]);
                printf("\n"); 
                check = 0;
            }
            ar[j] = sub;
    }
    for (int n = 0; n < ar_size; n++)
        printf("%i ", ar[n]);
    printf("\n");
}
int main(void) {
    int _ar_size;
    scanf("%d", &_ar_size);
    int _ar[_ar_size], _ar_i;
    for(_ar_i = 0; _ar_i < _ar_size; _ar_i++) { 
        scanf("%d", &_ar[_ar_i]); 
    }

    insertionSort(_ar_size, _ar);
    return 0;
}
