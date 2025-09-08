// Q37: Write a program to find the LCM of two numbers.

/*
Sample Test Cases:
Input 1:
4 5
Output 1:
20

Input 2:
7 3
Output 2:
21

*/
#include <stdio.h>
int main()
{
    int num1, num2, l, s, lcm = 1;
    scanf("%d %d", &num1, &num2);
    l = (num1 < num2) ? num2 : num1;
    s = (num1 > num2) ? num2 : num1;
    int i = 2;
    while (l > 1)
    {
        if ((s % i == 0) && (l % i == 0))
        {
            lcm *= i;
            s = s / i;
            l = l / i;
        }
        else if (s % i == 0)
        {
            lcm *= i;
            s = s / i;
        }
        else if (l % i == 0)
        {
            lcm *= i;
            l = l / i;
        }
        else
        {
            i++;
        }
    }
    printf("%d", lcm);
}