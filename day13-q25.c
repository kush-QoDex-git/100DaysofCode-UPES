// Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

/*
Sample Test Cases:
Input 1:
4 2 +
Output 1:
6

Input 2:
10 3 %
Output 2:
1

Input 3:
15 5 /
Output 3:
3

*/
#include <stdio.h>

int main()
{
    float n1, n2;
    char ops;
    scanf("%f %f %c", &n1, &n2, &ops);
    switch (ops)
    {
    case '+':
        printf("%f", n1 + n2);
        break;
    case '-':
        printf("%f", n1 - n2);
        break;
    case '*':
        printf("%f", n1 * n2);
        break;
    case '/':
        printf("%f", n1 / n2);
        break;
    case '%':
        printf("%f", (int)n1 % (int)n2);
        break;

    default:
        break;
    }

    return 0;
}