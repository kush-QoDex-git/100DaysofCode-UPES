// Q87: Count spaces, digits, and special characters in a string.

/*
Sample Test Cases:
Input 1:
a b1&2
Output 1:
Spaces=1, Digits=2, Special=1

*/
#include <stdio.h>

void count_space_digits_specialchar_in_str(char *str, int *spaces, int *digits, int *spclChar)
{
    int i = 0;
    *spaces = 0;
    *digits = 0;
    *spclChar = 0;
    while (str[i] != '\0' && str[i] != '\n')
    {
        if ((int)str[i] == 32)
        {
            ++(*spaces);
        }
        else if ((int)str[i] > 47 && (int)str[i] < 58)
        {
            ++(*digits);
        }
        else if ((((int)str[i] > 32) && ((int)str[i] < 48)) || (((int)str[i] > 57) && ((int)str[i] < 65)) || ((int)str[i] > 90 && (int)str[i] < 97) || ((int)str[i] > 122 && (int)str[i] < 127))
        {
            ++(*spclChar);
        }
        else
        {
        }
        i++;
    }
}

int main()
{

    char str[50];
    fgets(str, 50, stdin);
    int spaces, digi, spcl;
    count_space_digits_specialchar_in_str(str, &spaces, &digi, &spcl);
    printf("Spaces= %d, Digits= %d, Specials= %d", spaces, digi, spcl);
    return 0;
}