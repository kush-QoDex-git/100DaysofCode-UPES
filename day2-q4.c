// Q4: Write a program to calculate the area and circumference of a circle given its radius.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Area=153.94, Circumference=43.96

Input 2:
3
Output 2:
Area=28.27, Circumference=18.85

*/

#include <stdio.h>

void circleAC()
{

    float radius, circumference, area, pi = 3.1415926535;
    printf("Enter Radius of the: ");
    scanf("%f", &radius);
    if (radius == 0)
    {
        printf("With this input you'll get a point not a circle!\n\tTry Again.");
        circleAC();
    }
    else if (radius < 0)
    {
        radius = -(radius);
    }
    else
    {
    }

    circumference = 2 * pi * radius;
    area = pi * radius * radius;

    printf("Area of the circle with given dimensions: %f\n", area);
    printf("Circumference of the circle with given dimensions: %f\n", circumference);
}
int main()
{
    circleAC();
    return 0;
}