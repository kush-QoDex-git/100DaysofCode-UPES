// Q20: Write a program to display the day of the week based on a number (1–7) using switch-case.

/*
Sample Test Cases:
Input 1:
1
Output 1:
Monday

Input 2:
5
Output 2:
Friday

*/

#include <stdio.h>

int main()
{
    int day_num;

    printf("Enter day number of the week [1-7]: ");
    scanf("%d", &day_num);
    switch (day_num)
    {
    case 1:
        printf("It's Monday.");
        break;
    case 2:
        printf("It's Tuesday.");

        break;
    case 3:
        printf("It's Wednesday.");

        break;
    case 4:
        printf("It's thursday.");

        break;
    case 5:
        printf("It's Friday.");

        break;
    case 6:

        printf("It's Saturday.");
        break;
    case 7:
        printf("It's Sunday.");

        break;

    default:
        printf("Please enter from 1 to 7 only.");
        break;
    }

    return 0;
}