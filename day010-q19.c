// Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

/*
Sample Test Cases:
Input 1:
3 3 3
Output 1:
Equilateral

Input 2:
3 3 4
Output 2:
Isosceles

Input 3:
2 3 4
Output 3:
Scalene

*/

#include <stdio.h>

int main()
{
    float a, b, c;
    printf("\nGive sides for the triangle \n(input the sides with !blank space separation!): ");
    scanf("%f %f %f", &a, &b, &c);
    if (((a + b) > c) && ((b + c) > a) && ((a + c) > b))
    {
        if (a == b && b == c)
        {
            printf("\tTriangle with given sides is an equilateral");
        }
        else if (a == b || b == c || a == c)
        {
            printf("\tTriangle with given sides is an isosceles");
        }
        else
        {

            printf("\tTriangle with given sides is a scalene");
        }
    }
    else
    {
        printf("\nA triangle with given sides is not possible.\n");
    }

    return 0;
}
