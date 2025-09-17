/*Q54: Write a program to print the following pattern:

   *
  ***
 *****
*******
 *****
  ***
   *
*/

/*
Sample Test Cases:
Input 1:

Output 1:
Pattern with layers of stars as shown.

*/
#include <stdio.h>

int main()
{
    size_t count = 4;
    for (size_t i = 1; i <= count; i++)
    {
        for (size_t j = 0; j < (count - i); j++)
        {
            printf(" ");
        }
        for (size_t j = (count - i); j < count; j++)
        {
            printf("*");
        }
        for (size_t j = 1; j < i; j++)
        {

            printf("*");
        }

        printf("\n");
    }

    for (size_t i = 1; i <= (count - 1); i++)
    {
        for (size_t j = 0; j < i; j++)
        {
            printf(" ");
        }
        for (size_t j = 0; j < ((2 * (count - i)) - 1); j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}