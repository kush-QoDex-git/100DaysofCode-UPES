// Q86: Check if a string is a palindrome.

/*
Sample Test Cases:
Input 1:
madam
Output 1:
Palindrome

Input 2:
hello
Output 2:
Not palindrome

*/
#include <stdio.h>
int str_len(char *str)
{
    int len = 0;
    while (str[len] != '\0' && str[len] != '\n')
    {
        len++;
    }
    return len;
}
int str_isPalindrome(char *str)
{
    int len = str_len(str);
    for (int i = 0; i < len / 2; i++)
    {
        if (str[i] != str[len - (i + 1)])
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    char str[20];
    fgets(str, 20, stdin);
    fflush(stdin);
    if (str_isPalindrome(str))
    {
        printf("\nPalindrome.\n");
    }
    else
    {
        printf("\nNOT Palindrome.\n");
    }
    return 0;
}