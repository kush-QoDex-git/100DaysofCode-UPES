// Q133: Create an enum for months and print how many days each month has.

/*
Sample Test Cases:
Input 1:
FEB
Output 1:
28 or 29 days

*/
#include <stdio.h>

typedef enum
{
    JAN,
    FEB,
    MAR,
    APL,
    MAY,
    JUN,
    JUL,
    AUG,
    SEP,
    OCT,
    NOV,
    DEC
} MONTHS;
void mi(MONTHS m)
{
    switch (m)
    {
    case 0:
        printf("31");
        break;
    case 1:
        printf("28");
        break;
    case 2:
        printf("31");
        break;
    case 3:
        printf("30");
        break;
    case 4:
        printf("31");
        break;
    case 5:
        printf("30");
        break;
    case 6:
        printf("31");
        break;
    case 7:
        printf("31");
        break;
    case 8:
        printf("30");
        break;
    case 9:
        printf("31");
        break;
    case 10:
        printf("30");
        break;
    case 11:
        printf("31");
        break;

    default:
        break;
    }
}
int main()
{
    MONTHS m = 3;
    mi(m);

    return 0;
}