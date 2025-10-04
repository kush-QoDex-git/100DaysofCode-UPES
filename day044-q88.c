// Q88: Replace spaces with hyphens in a string.

/*
Sample Test Cases:
Input 1:
hello world
Output 1:
hello-world

*/
#include <stdio.h>

void replace_spaces_eith_hyphen_in_str(char *str)
{
    int i = 0;
    while (str[i] != '\0' && str[i] != '\n')
    {
        if (str[i] == ' ')
        {
            str[i] = '-';
        }
        i++;
    }
}

int main()
{
    char str[50];
    fgets(str, 50, stdin);
    replace_spaces_eith_hyphen_in_str(str);
    printf("%s", str);
    return 0;
}