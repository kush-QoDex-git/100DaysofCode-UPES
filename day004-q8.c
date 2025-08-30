// Q8: Write a program to find and display the sum of the first n natural numbers.

/*
Sample Test Cases:
Input 1:
5
Output 1:
Sum=15

Input 2:
10
Output 2:
Sum=55

*/
#include <stdio.h>
int nsum(int n)
{
    int sum = 0;
    int i = 0;
    while (i <= n)
    {
        sum += i;
        i++;
    }
    return sum;
}
int main()
{
    int num;
    printf("Enter the natural number till which you want the sum : ");
    scanf("%d", &num);
    printf("Sum: %d", nsum(num));
    return 0;
}
