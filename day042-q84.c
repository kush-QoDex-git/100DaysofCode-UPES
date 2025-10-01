// Q84: Convert a lowercase string to uppercase without using built-in functions.

/*
Sample Test Cases:
Input 1:
hello
Output 1:
HELLO

*/
#include <stdio.h>
void to_UpperCase(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        if (((int)str[i] > 96) && ((int)str[i] < 123))
        {
            str[i] = (char)((int)str[i] - 32);
        }
        i++;
    }
}

int main()
{
    char str[50];
    fgets(str,50,stdin);
    to_UpperCase(str);
    printf("%s",str);

    return 0;
}