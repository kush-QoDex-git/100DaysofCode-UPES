// Q12: Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.

/*
Sample Test Cases:
Input 1:
-5
Output 1:
Negative

Input 2:
0
Output 2:
Zero

Input 3:
10
Output 3:
Positive

*/

#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number to check whether it is an even or odd: ");
    scanf("%d", &num);
    if (num < 0)
    {
        printf("Give number %d is negative.", num);
    }
    else if (num == 0)
    {
        printf("Give number %d is Zero. :)", num);
    }
    else
    {
        printf("Give number %d is positive", num);
    }

    return 0;
}