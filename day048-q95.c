// Q95: Check if one string is a rotation of another.

/*
Sample Test Cases:
Input 1:
abcde
deabc
Output 1:
Rotation

Input 2:
abc
acb
Output 2:
Not rotation

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
int rotation(char *str1, char *str2)
{
    rm_spaces_newlines(str1);
    rm_spaces_newlines(str2);

    if (str_len(str1) != str_len(str2))
    {
        return 0;
    }
    int front1_i = 0, front2_i = 0, back1_i, back2_i = 0;
    while (str2[back2_i] != str1[0])
    {
        back2_i++;
    }
    while (str2[back2_i + front1_i] != '\0' && str2[back2_i + front1_i] != '\n')
    {
        if (str1[front1_i] != str2[back2_i + front1_i])
        {
            return 0;
        }
        front1_i++;
    }
    
    back1_i = front1_i;
    while (str1[back1_i + front2_i] != '\0' && str1[back1_i + front2_i] != '\n')
    {
        if (str1[back1_i + front2_i] != str2[front2_i])
        {
            return 0;
        }
        front2_i++;
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
    if (rotation(str1, str2) == 1)
    {
        printf("Rotation");
    }
    else
    {
        printf("Not Rotation");
    }

    return 0;
}