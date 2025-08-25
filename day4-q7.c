// Q7: Write a program to swap two numbers without using a third variable.

/*
Sample Test Cases:
Input 1:
10 20
Output 1:
After swap: 20 10

Input 2:
7 14
Output 2:
After swap: 14 7

*/
#include <stdio.h>
void swap(float *a, float *b)
{
    float temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    float a = 3, b = 5;
    printf("Value of a & b before swap respectively: %f, %f\n", a, b);
    swap(&a, &b);
    printf("Value of a & b after swap respectively: %f, %f", a, b);

        return 0;
}