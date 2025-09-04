// Q29: Write a program to calculate the factorial of a number.

/*
Sample Test Cases:
Input 1:
5
Output 1:
120

Input 2:
3
Output 2:
6

*/

int fac(int n){
    if(n==1 || n==0){
        return 1;
    }
    return n*fac(n-1);
}
#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    printf("%d",fac(n));

    return 0;
}