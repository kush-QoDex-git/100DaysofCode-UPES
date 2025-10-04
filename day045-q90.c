// Q90: Toggle case of each character in a string.

/*
Sample Test Cases:
Input 1:
Hello
Output 1:
hELLO

*/
#include <stdio.h>

void toggle_case_of_each_char_in_str(char *str)
{
    int i = 0;
    while (str[i] != '\0' && str[i] != '\n')
    {
        if ((int)str[i] > 64 && (int)str[i] < 91)
        {
            str[i] = 32 + (int)str[i];
        }
        else if ((int)str[i] > 96 && (int)str[i] < 123)
        {
            str[i] = (int)str[i] - 32;
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
    toggle_case_of_each_char_in_str(str);
    printf("%s", str);
    return 0;
}