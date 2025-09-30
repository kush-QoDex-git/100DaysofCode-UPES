// Q82: Print each character of a string on a new line.

/*
Sample Test Cases:
Input 1:
Hi
Output 1:
H
i

*/

#include <stdio.h>

void print_each_char_of_str(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        printf("%c\n", str[i]);
        i++;
    }
}

int main()
{
    char input[50];
    fgets(input, 50, stdin);
    print_each_char_of_str(input);

    return 0;
}