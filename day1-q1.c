//Q1: Write a program to input two numbers and display their sum.

/*
Sample Test Cases:
Input 1:
3 4
Output 1:
Sum = 7

Input 2:
-1 20
Output 2:
Sum = 19

*/
#include <stdio.h>
int main()
{
    float num1, num2;
    printf("Enter First number: ");
    scanf("%f", &num1);
    printf("Enter Second number: ");
    scanf("%f", &num2);
    printf("Sum of the two is: %f\n", (num1 + num2));
    return 0;
}