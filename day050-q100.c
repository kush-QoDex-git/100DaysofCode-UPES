// Q100: Print all sub-strings of a string.

/*
Sample Test Cases:
Input 1:
abc
Output 1:
a,ab,abc,b,bc,c

*/
#include <stdio.h>

void print_all_substr(char *str)
{
    int i = 0;
    int j = 0;
    int k = 0;
    while (str[i] != '\0' && str[i] != '\n')
    {
        j = i;
        while (str[j] != '\0' && str[j] != '\n')
        {
            for (int g = 0; g <= j - i; g++)
            {
                printf("%c", str[i + g]);
            }
            if (str[i+1] != '\0' && str[i+1] != '\n')
            {
                printf(", ");
            }

            j++;
        }
        i++;
    }
}

int main()
{
    char str[50];
    fgets(str, 50, stdin);
    print_all_substr(str);

    return 0;
}