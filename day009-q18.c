// Q18: Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria:
// 90-100: Grade A
// 80-89: Grade B
// 70-79: Grade C
// 60-69: Grade D
// below 60: Grade F.

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
    if (p < 60)
    {
        printf("Grade F");
    }
    else if (p >= 60 && p <= 69)
    {
        printf("Grade D");
    }
    else if (p >= 70 && p <= 79)
    {
        printf("Grade C");
    }
    else if (p >= 80 && p <= 89)
    {
        printf("Grade B");
    }
    else if (p >= 90 && p <= 100)
    {
        printf("Grade A");
    }
    else
    {
        printf("Invalid Input!");
    }

    return 0;
}

