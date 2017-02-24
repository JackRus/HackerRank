#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(void) 
{
    int t;
    scanf("%i", &t);
    int n;
    while (t--)
    {
        int i=2;
        scanf("%d",&n);
        int count = 0;
        int self = 0;
        while(i <= sqrt(n))
        {
            if(n % i == 0) 
            {
                if(i % 2 == 0)
                    count++;

                if ((i != (n / i)) && (n/i % 2 == 0)) 
                    count++;
                
                if (self == 0 && n % 2 == 0)
                {
                    self = 1;
                    count++; 
                }
            } 
            i++;
        }
        if (n == 2)count = 1;
        printf("%i\n", count);
    }
}
