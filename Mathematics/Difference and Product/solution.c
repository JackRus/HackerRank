/*
*   Author: Jack Rus
*
*   03/2017
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

int main(void) {
    // get number of cases
    int T;
    scanf("%i", &T);
    
    // iterate through cases
    for (int j = 1; j <= T; j++)
    {
        // gets data
        int D, P, k = 2, status = 0;
        scanf("%i %i", &D, &P);
        int a = round(sqrt(abs(P)));
        
        // exemption cases
        if (D == 0 && P == 0)
            printf("1\n");
        else if ((D < 0) || (D == 0 && P < 0))
            printf("0\n");   
        else if ((D == 0 && (P == 1 || P == a*a)) || (D == 2 && P == -1) ||
                 (P < 0 && D > 0 && sqrt(abs(P)) == D/2.0 && D%2 == 0))
            printf("2\n");
        else if (D == P - 1 || (D == abs(P) + 1 && P < 0) || P == 0)
            printf("4\n");
        
        // all other cases
        else
        {
            // iterates through integers
            while(k <= a)
            {
                if ((P > 0 && P % k == 0 && P / k == k + D) || 
                    (P < 0 && P % k == 0 && abs(P / k) == D - k))
                {
                    printf("4\n");
                    
                    // if there is pair found, chnges the status to 1 and breaks the loop
                    status = 1;
                    break;
                }                   
                k++;
            }
            // case when there are no pairs
            if (status == 0) printf("0\n");
        }
    }
}
