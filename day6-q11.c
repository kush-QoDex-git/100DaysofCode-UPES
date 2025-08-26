// Q11: Write a program to input an integer and check whether it is even or odd using if–else.

/*
Sample Test Cases:
Input 1:
7
Output 1:
7 is odd

Input 2:
12
Output 2:
12 is even

*/

#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number to check whether it is an even or odd: ");
    scanf("%d", &num);
    if (num % 2 == 0)
    {
        printf("Given number %d is even.", num);
    }
    else if (num % 2 != 0)
    {
        printf("Given number %d is odd.", num);
    }
    else
    {
        printf("Given number %d is Zero :).", num);
    }

    return 0;
}