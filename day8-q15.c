// Q15: Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.

/*
Sample Test Cases:
Input 1:
A
Output 1:
Uppercase alphabet

Input 2:
a
Output 2:
Lowercase alphabet

Input 3:
3
Output 3:
Digit

Input 4:
#
Output 4:
Special character

*/
#include <stdio.h>

int main()
{
    char ch;
    printf("Enter an alphabet to check if it is-\n->Uppercase alphabet\n->Lowercase alphabet\n->Digit\n->Special Character\n\t: ");
    scanf("%c", &ch);
    if (((int)ch > 32 && (int)ch < 48) || ((int)ch > 57 && (int)ch < 65) || ((int)ch > 90 && (int)ch < 97) || ((int)ch > 122 && (int)ch < 127))
    {
        printf("Given Character is a \"Special Character\"");
    }
    else if (((int)ch > 64 && (int)ch < 91))
    {
        printf("Given Character is an \"Uppercase Alphabet\"");
    }
    else if (((int)ch > 96 && (int)ch < 123))
    {
        printf("Given Character is a \"Lowercase Alphabet\"");
    }
    else if (((int)ch > 47 && (int)ch < 58))
    {
        printf("Given Character is a \"Digit\"");
    }
    else{
        printf("Given input is not a character you might have pressed some function key!");
    }

    return 0;
}