// Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

/*
Sample Test Cases:
Input 1:
5 10
Output 1:
Area=50, Perimeter=30

Input 2:
3 7
Output 2:
Area=21, Perimeter=20

*/

#include <stdio.h>

void rectAP()
{

    float length, breadth, area, perimeter;
    printf("Enter Length of the rectangle: ");
    scanf("%f", &length);
    printf("Enter Breadth of the rectangle: ");
    scanf("%f", &breadth);
    if (length == 0 || breadth == 0)
    {
        printf("With this input you'll get a line not a rectangle!\n\tTry Again.");
        rectAP();
    }
    if (length < 0)
    {
        length = -(length);
    }
    else
    {
    }
    if (breadth < 0)
    {
        breadth = -(breadth);
    }
    else
    {
    }
    perimeter = (2 * length) + (2 * breadth);
    area = length * breadth;
    printf("Area of the rectangle with given dimensions: %f\n", area);
    printf("Perimeter of the rectangle with given dimensions: %f\n", perimeter);
}
int main()
{
    rectAP()
    return 0;
}
