// Q81: Count characters in a string without using built-in length functions.

/*
Sample Test Cases:
Input 1:
Hello
Output 1:
5

Input 2:

Output 2:
1

*/
#include <stdio.h>
int strlen_custom_tilnewLine(char *str)
{
    int count = 0;
    while (str[count] != '\0' && str[count] != '\n')
    {
        printf("%c\n", str[count]);
        count++;
    }
    return count;
}
int main()
{
    char input[50] = {"wqw\nwqwe"};
    fgets(input, 50, stdin);
    // for (int i = 0; i < 50; i++)
    // {
    //     if (input[i] == '\n')
    //     {
    //         input[i] = '\0';
    //         break;
    //     }
    // }

    printf("%d", strlen_custom_tilnewLine(input));

    return 0;
}