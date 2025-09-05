// Q31: Write a program to take a number as input and print its equivalent binary representation.

/*
Sample Test Cases:
Input 1:
10
Output 1:
1010

Input 2:
7
Output 2:
111

*/
#include <stdio.h>
int Int_to_bin(int a)
{
    int di = 1, bin = 0;
    while ((a / 2) > 0)
    {
        bin += (a % 2) * di;
        a = (a / 2);
        di *= 10;
        if (a == 1)
        {
            bin += di;
        }
    }
    return bin;
}
int main()
{
    printf("%d", Int_to_bin(7));
}