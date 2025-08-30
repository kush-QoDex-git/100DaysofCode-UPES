// Q13: Write a program to input a year and check whether it is a leap year or not using conditional statements.

/*
Sample Test Cases:
Input 1:
2020
Output 1:
Leap year

Input 2:
1900
Output 2:
Not a leap year

Input 3:
2000
Output 3:
Leap year

*/
#include <stdio.h>

int main()
{
    int year;
    printf("Enter a year to check whether it is a leap year or not: ");
    scanf("%d", &year);
    if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
    {
        if (year < 2025)
        {
            printf("Yes. It was a Leap year.");
        }
        else if (year > 2025)
        {
            printf("Yes. It wil be a Leap year.");
        }
        else
        {
            printf("Yes. It is a Leap year.");
        }
    }
    else
    {
        if (year < 2025)
        {
            printf("No. It was not a Leap year.");
        }
        else if (year > 2025)
        {
            printf("No. It wil not be a Leap year.");
        }
        else
        {
            printf("No. It is not a Leap year.");
        }
    }

    return 0;
}
