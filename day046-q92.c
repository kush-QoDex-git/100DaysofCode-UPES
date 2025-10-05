// Q92: Find the first repeating lowercase alphabet in a string.

/*
Sample Test Cases:
Input 1:
stress
Output 1:
s

*/

#include <stdio.h>
char first_repeating_lowercase(char *str)
{
    int i = 0;
    char ch;
    while (str[i] != '\0' && str[i] != '\n')
    {
        if ((str[i] == str[i + 1]) && ((int)str[i] > 96 && (int)str[i] < 123))
        {
            ch = str[i];
        }
        i++;
    }
    return ch;
}

int main()

{
    char str[50];
    fgets(str, 50, stdin);
    
    printf("%c", first_repeating_lowercase(str));

    return 0;
}