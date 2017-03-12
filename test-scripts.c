//Author: Jack Rus | 03/2017

/***************************************************************************************************************
*   Very useful template for reading the data for cases from one file + reading correct answers (for comparison)
*   & writing the results to a different file.
*
*   Works with any amount of cases. File names are hard coded, but you can easealy change to 
*
*   Helps to see mistakes and correct them.
***************************************************************************************************************/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <cs50.h>
#include <math.h>


int main(void)
{
    // open files to read and write data
    // file names are hard coded, you can use command-line arguments instead
    FILE* input = fopen("input.txt", "r");
    FILE* answers = fopen("correct_answers.txt", "r");
    FILE* output = fopen("output.txt", "w+");
   
    // gets number of cases
    int N, a, b, answer;
    fscanf(input,"%i", &N);  

    // gets info for each case, starts from 1 for coonting conveniece
    for (int i = 1; i <= N; i++)
    {
        // gets data 
        fscanf(input, "%i %i", &a, &b);
        // correct answer
        fscanf(answers, "%i", &answer);
        
        // put this lines to control the output
        fprintf(output, "Case %i/%i: a = %i, b = %i. Result = %i | %i\n", i, N, a, b, /*TODO*/, answer);
        
        
    }
    
    // close files
    fclose(answers);
    fclose(input);
    fclose(output);
    return 0;
}

/***************************************************************************************************************
*   Template for reading the data for cases from command line.

*   Helps to see mistakes and correct them.
***************************************************************************************************************/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <cs50.h>
#include <math.h>

int main(void) 
{
    // gets number of cases
    int N, a, b;
    scanf("%i", &N);
 
    // gets info for each case
    for (int i = 1; i <= N; i++)
    {
        // gets a & b
        scanf("%i %i", &a, &b);

        ///////////////////////
        /////////TODO//////////
        ///////////////////////

    }
}


