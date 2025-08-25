// Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.

/*
Sample Test Cases:
Input 1:
1000 5 2
Output 1:
Simple Interest=100, Compound Interest=102.5

Input 2:
5000 7 3
Output 2:
Simple Interest=1050, Compound Interest=1125.76

*/
#include <stdio.h>
#include <math.h>
float simpleintrst(float p, float r, float t)
{
    float si = p * (r / 100) * t;
    return si;
}
float compoundintrst(float p, float r, float t)
{
    int t_int = (int)t;
    float t_frac = t - t_int;
    float ci = 0;
    float pn = p * (pow(((r / 100) + 1), t_int-1));
    for (int i = 0; i < t_int; i++)
    {
        ci += p * (pow(((r / 100) + 1), i)) * (r / 100);
    }
    ci += pn* (r / 100) * t_frac;

    return ci;
}
int main()
{
    float principal, rate, time;
    printf("Enter Principal amount: ");
    scanf("%f", &principal);
    printf("Enter interest rate(in \%) : ");
    scanf("%f", &rate);
    printf("Enter Time(in years) : ");
    scanf("%f", &time);
    printf("Simple Interest on your investment is: %f\n", simpleintrst(principal, rate, time));
    printf("Compound Interest on your investment is: %f", compoundintrst(principal, rate, time));

    return 0;
}