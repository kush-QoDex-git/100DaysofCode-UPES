/*Q52: Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*


*/
/*
Sample Test Cases:
Input 1:

Output 1:
Pattern with stars spaced irregularly as shown.

*/

#include <stdio.h>

int main(){
    int count =3;
    
    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < ((2*i)+1); j++)
        {
            printf("*\n");
        }
        printf("\n");
    }
    
    for (int i = count-1; i > 0 ; i--)
    {
        for (int j = 0; j < ((2*i)-1); j++)
        {
            printf("*\n");
        }
        printf("\n");
    }
    

    return 0;
}