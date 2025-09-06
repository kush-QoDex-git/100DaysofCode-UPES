// Q33: Write a program to check if a number is an Armstrong number.

/*
Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong

*/
#include <stdio.h>
int armstorng(int n)
{
    int sum, n1 = n, digit, d = 10;
    while (n1 / (d / 10) > 0)
    {
        digit = (n1 % d) / (d / 10);
        d *= 10;
        sum += digit * digit * digit;
    }
    if (sum == n)
    {
        return 1;
    }
    return 0;
}
int main()
{
    int num;
    scanf("%d", &num);
    if (armstorng(num))
    {
        printf("\n Arnstrong");
    }
    else
    {

        printf("\nNot Arnstrong");
    }
    return 0; 
}