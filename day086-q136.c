// Q136: Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.

/*
Sample Test Cases:
Input 1:
ADD 10 20
Output 1:
30

*/
#include <stdio.h>
typedef enum
{
    ADD,
    SUB,
    MULTI
} MENU;

void OPPS(MENU m, int a, int b)
{
    switch (m)
    {
    case ADD:
        printf("%d + %d = %d", a, b, a + b);
        break;
    case SUB:
        printf("%d - %d = %d", a, b, a - b);
        break;
    case MULTI:
        printf("%d X %d = %d", a, b, a * b);
        break;

    default:
        break;
    }
}
int main()
{
    OPPS(2,45,56);

    return 0;
}