// Q23: Write a program to calculate library fine based on late days as follows:
// First 5 days late: ₹2/day
// Next 5 days late: ₹4/day
// Next 20 days days late: ₹6/day
// More than 30 days: Membership Cancelled.

/*
Sample Test Cases:
Input 1:
4
Output 1:
Fine ₹8

Input 2:
8
Output 2:
Fine ₹32

Input 3:
15
Output 3:
Fine ₹90

Input 4:
31
Output 4:
Membership Cancelled

*/
#include <stdio.h>

int main()
{
    int ldays;
    float fine;
    printf("Number of days: ");
    scanf("%d", &ldays);
    if (ldays <= 5)
    {
        fine = ldays * 2;
        printf("Fine %f",fine);
    }
    else if (ldays > 5 && ldays <= 10)
    {
        fine = 10 + ((ldays - 5) * 4);
        printf("Fine %f",fine);
    }
    else if (ldays > 10 && ldays <= 30)
    {
        fine = 30 + ((ldays - 10) * 6);
        printf("Fine %f",fine);
    }
    else if (ldays>30)
    {
        printf("Membership Cancelled.");
    }

    return 0;
}