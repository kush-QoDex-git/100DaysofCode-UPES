// Q44: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

/*
Sample Test Cases:
Input 1:
3
Output 1:
Approximate sum: 3.3

Input 2:
5
Output 2:
Approximate sum: 4.4

*/

#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);
    if (n == 0)
        printf("!Enter >0!");
    float t, sum = 1;
    for (float i = 2; i <= n; i++)
    {
        t = 1 - (1 / (2 * i));
        sum += t;
        // printf("%f %f\n",t, sum);
    }
    printf("Approximate sum: %f", sum);

    return 0;
}