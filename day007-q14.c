// Q14: Write a program to input a character and check whether it is a vowel or consonant using if–else.

/*
Sample Test Cases:
Input 1:
a
Output 1:
Vowel

Input 2:
b
Output 2:
Consonant

*/

#include <stdio.h>

int main()
{
    char ch;
    printf("Enter an alphabet to check if it is a vowel or consonant: ");
    scanf("%c", &ch);
    if ((((int)ch > 64) && ((int)ch < 91)) || ((((int)ch > 96)) && ((int)ch < 123)))
    {

        if (ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O' || ch == 'u' || ch == 'U')
        {
            printf("Given Alphabet is a Vowel.");
        }
        else
        {
            printf("Given Alphabet is a Consonant.");
        }
    }
    else
    {
        printf("Given character id not an alphabet. Please run the program again. :(");
    }
    return 0;
}
