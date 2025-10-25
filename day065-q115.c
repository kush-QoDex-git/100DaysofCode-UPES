// Q115: Write a program to take two strings s and t as inputs (assume all characters are lowercase). The task is to determine if s and t are valid anagrams, meaning they contain the same characters with the same frequencies. Print "Anagram" if they are, otherwise "Not Anagram".

/*
Sample Test Cases:
Input 1:
s = "anagram", t = "nagaram"
Output 1:
Anagram

Input 2:
s = "rat", t = "car"
Output 2:
Not Anagram

*/
#include <stdio.h>
#include <string.h>
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
int are_Anagrams(char *s1, char *s2)
{
    char cs1[strlen(s1)];
    char cs2[strlen(s2)];
    strcpy(cs1,s1);
    strcpy(cs2,s2);
    rm_spaces_newlines(cs1);
    rm_spaces_newlines(cs2);
    int i = 0;
    int found = 0;
    int j = 0;
    while (cs1[i] != '\0')
    {
        found = 0;
        j=0;
        while (cs2[j] != '\0')
        {
            if (cs1[i] == cs2[j])
            {
                found = 1;
                rm_char_from_str_at_index(cs2, j);
                break;
            }
            j++;
        }
        if (found == 0)
        {
            return 0;
        }
        i++;
    }
    return 1;
}
int main()
{

    char s1[] = "anagram", s2[] = "nagaram", s3[] = "rat", s4[] = "car";
    if (are_Anagrams(s1, s2) == 1)
    {
        printf("Anagrams\n");
    }
    else
    {
        printf("NOT Anagrams\n");
    }
    if (are_Anagrams(s3, s4) == 1)
    {
        printf("Anagrams\n");
    }
    else
    {
        printf("NOT Anagrams\n");
    }

    return 0;
}