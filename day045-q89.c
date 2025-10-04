// Q89: Count frequency of a given character in a string.

/*
Sample Test Cases:
Input 1:
programming
g
Output 1:
2

*/
#include <stdio.h>

int frequency_of_char_in_str(char *str, char ch)
{
    int i = 0, count = 0;

    while (str[i] != '\0')
    {
        if (str[i] == ch)
        {
            count++;
        }
        i++;
    }
    return count;
}

int main()
{
    char str[50];
    char ch;
    fgets(str, 50, stdin);
    printf("Enter the character whose frequency you wanna check: ");
    scanf("%c", &ch);
    printf("%d",frequency_of_char_in_str(str,ch));
    return 0;
}