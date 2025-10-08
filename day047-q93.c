// Q93: Check if two strings are anagrams of each other.

/*
Sample Test Cases:
Input 1:
listen
silent
Output 1:
Anagrams

Input 2:
hello
world
Output 2:
Not anagrams

*/
#include <stdio.h>

int str_len(char *str)
{
    int i = 0;
    while (str[i] != '\0' && str[i] != '\n')
    {
        i++;
    }
    return i;
}

void str_cpy(char *to_str, char *from_str)
{
    int i = 0;
    while (from_str[i] != '\0')
    {
        to_str[i] = from_str[i];
        i++;
    }
    to_str[i] = '\0';
}
void rm_char_from_str_at_index(char *str, int indx)
{
    int i = indx;
    while (str[i] != '\0')
    {
        str[i] = str[i + 1];
        i++;
    }
}
void rm_spaces_newlines(char *str)
{
    int len = str_len(str);
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == '\n' || str[i] == ' ')
        {
            rm_char_from_str_at_index(str, i);
        }
        else
        {
            i++;
        }
    }
}
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
int are_Anagrams(char *str1, char *str2)
{
    rm_spaces_newlines(str1);
    rm_spaces_newlines(str2);
    to_UpperCase(str1);
    to_UpperCase(str2);
    int len1 = str_len(str1), len2 = str_len(str2);
    if (len1 != len2)
    {
        return 0;
    }
    else
    {
        char str3[len1 + 1];
        str_cpy(str3, str2);
        int ans, len3 = len2;
        for (int i = 0; i < len1; i++)
        {
            ans = 0;
            for (int j = 0; j < len3; j++)
            {
                if (str1[i] == str3[j])
                {
                    rm_char_from_str_at_index(str3, j);
                    len3--;
                    ans = 1;
                }
            }
            if (ans == 0)
            {
                return 0;
            }
        }
    }
    return 1;
}

int main()
{
    char str1[50], str2[50];
    printf("Enter first string: ");
    fgets(str1, 50, stdin);
    printf("Enter second string: ");
    fgets(str2, 50, stdin);
    if (are_Anagrams(str1, str2))
    {
        printf("Anagrams");
    }
    else
    {
        printf("Not Anagrams");
    }

    return 0;
}
