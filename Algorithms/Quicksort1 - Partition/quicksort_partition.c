#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>

void partition(int ar_size, int ar[]) 
{
	int l = 0, r = 0;
	int left[ar_size], right[ar_size];
	for (int k = 1; k < ar_size; k++)
	{
		(ar[k] >= ar[0]) ? (right[r] = ar[k], r++) : (left[l] = ar[k], l++);
	}
	
	int i;
	for (i = 0; i < l; i++)
		printf("%i ", left[i]);
	printf("%i ", ar[0]);
	for (i = 0; i < r; i++)
		printf("%i ", right[i]);	
	
}

int main(void) 
{
    int _ar_size;
    scanf("%d", &_ar_size); 
    int _ar[_ar_size];
    
    for (int _ar_i = 0; _ar_i < _ar_size; _ar_i++) 
    { 
    	scanf("%d", &_ar[_ar_i]); 
    }

    partition(_ar_size, _ar);
   
    return 0;
}
