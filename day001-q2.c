// Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

/*
Sample Test Cases:
Input 1:
10 2
Output 1:
Sum=12, Diff=8, Product=20, Quotient=5

Input 2:
7 3
Output 2:
Sum=10, Diff=4, Product=21, Quotient=2

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
    printf("Difference of the two is: %f\n", (num1 - num2));
    printf("Prodect of the two is: %f\n", (num1 * num2));
    if (num2 == 0)
    {
        printf("!division by 0 is not defined!\n");
    }
    else
    {
        printf("Quotient of the two is: %f\n", (num1 / num2));
    }
    return 0;
}
