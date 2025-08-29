// Q18: Write a program to assign grades based on a percentage input.

/*
Sample Test Cases:
Input 1:
95
Output 1:
Grade A

Input 2:
82
Output 2:
Grade B

Input 3:
68
Output 3:
Grade D

Input 4:
50
Output 4:
Grade F

*/

#include <stdio.h>

int main()
{
    float p;
    printf("Enter the percen{tage(out of 100): ");
    scanf("%f", &p);
    if (p <= 50)
    {
        printf("Grade F");
    }
    else if (p <= 68)
    {
        printf("Grade D");
    }
    else if (p <= 82)
    {
        printf("Grade B");
    }
    else if (p <= 100)
    {
        printf("Grade A");
    }
    else
    {
        printf("Invalid Input!");
    }

    return 0;
}