// Q83: Count vowels and consonants in a string.

/*
Sample Test Cases:
Input 1:
hello
Output 1:
Vowels=2, Consonants=3

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
int char_isConsonant(char c)
{
    if (char_isVowel(c))
    {
        return 0;
    }
    else if (((int)c > 64 && (int)c < 91) || ((int)c > 96 && (int)c < 123))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void num_of_vowel_consonant_special_in_str(char *str, int *vow, int *conso, int *special_char)
{
    int i = 0;
    *vow = 0;
    *conso = 0;
    *special_char = 0;
    while (str[i] != '\0')
    {
        if (char_isVowel(str[i]))
        {
            ++(*vow);
        }
        else if (char_isConsonant(str[i]))
        {
            ++(*conso);
        }
        else if ((int)str[i] != 32 && (int)str[i] != 10) // to exclude '\n' and 'Space'
        {
            ++(*special_char);
        }
        else
        {
        }
        i++;
    }
}

int main()
{
    int vow, conso, spcl_ch;
    char str[50];
    fgets(str, 50, stdin);
    num_of_vowel_consonant_special_in_str(str, &vow, &conso, &spcl_ch);
    printf("\nVowels = %d, Consonants = %d, Special Characters = %d\n", vow, conso, spcl_ch);
    return 0;
}