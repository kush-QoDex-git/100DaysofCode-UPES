// Q91: Remove all vowels from a string.

/*
Sample Test Cases:
Input 1:
education
Output 1:
dctn

*/
#include <stdio.h>

int char_isVowel(char c)
{
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void remove_vowels_from_str(char *str)
{
    int i = 0, j;

    while (str[i] != '\0')
    {
        if (char_isVowel(str[i]) == 1)
        {
            j = i;
            while (str[j] != '\0')
            {
                str[j] = str[j + 1];
                j++;
            }
        }
        else
        {
        }
        if (char_isVowel(str[i]) == 0)
        {
            i++;
        }
    }
}

int main()
{
    char str[50];
    fgets(str, 50, stdin);
    remove_vowels_from_str(str);
    printf("%s", str);

    return 0;
}