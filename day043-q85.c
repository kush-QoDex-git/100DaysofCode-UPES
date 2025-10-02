// Q85: Reverse a string.

/*
Sample Test Cases:
Input 1:
abcd
Output 1:
dcba

*/

#include <stdio.h>
int str_len(char *str)
{
    int len = 0;
    while (str[len] != '\0')
    {
        len++;
    }
    return len;
}
void reverse_str(char *str)
{
    int len = str_len(str);
    char temp;
    for (int i = 0; i < len / 2; i++)
    {
        temp = str[i];
        str[i] = str[len - (i + 1)];
        str[len - (i + 1)] = temp;
    }
}

int main()
{
    char str[20];
    fgets(str,20,stdin);
    fflush(stdin);
    reverse_str(str);
    fputs(str,stdout);

    return 0;
}