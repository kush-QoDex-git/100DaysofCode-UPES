// Q47: Write a program to print the following pattern:
// *
// **
// ***
// ****
// *****

/*
Sample Test Cases:
Input 1:

Output 1:
*
**
***
****
*****

*/
#include <stdio.h>

int main()
{
    for (size_t i = 0; i < 5; i++)
    {
        for (size_t j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}