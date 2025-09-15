// Q51: Write a program to print the following pattern:
//     5
//    45
//  2345
//   345
// 12345

/*
Sample Test Cases:
Input 1:

Output 1:
    5
   45
  345
 2345
12345

*/
#include <stdio.h>

int main()
{
    int count = 5;
    for (int i = 1; i <= count; i++)
    {
        for (int j = 1; j <= count; j++)
        {
            if (j <= (count - i))
            {
                printf(" ");
            }
            else
            {
                printf("%d", j);
            }
        }
        printf("\n");
    }

    return 0;
}