// Q97: Print the initials of a name.

/*
Sample Test Cases:
Input 1:
John Doe
Output 1:
J.D.

*/

#include <stdio.h>
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
void printInitials(char *str)
{
    int i = 0;
    char initia[5];
    int j = 0;
    while (str[i] != '\0' && str[i] != '\n')
    {
        if (!(((int)str[i] > 64 && (int)str[i] < 91) || ((int)str[i] > 96 && (int)str[i] < 123)) && (int)str[i] != 32)
        {
            printf("\n\t\t %dSpecial characters are not allowed.\n",i);
            break;
        }
        else
        {
            if (i == 0)
            {
                if (str[i] == ' ')
                {
                    i++;
                    continue;
                }
                else
                {
                    initia[j] = str[i];
                    j++;
                    initia[j] = '.';
                    j++;
                    i++;
                }
            }
            else
            {
                if (str[i] != ' ' && str[i - 1] == ' ')
                {
                    initia[j] = str[i];
                    j++;
                    initia[j] = '.';
                    j++;
                    i++;
                }
                else
                {
                    i++;
                    continue;
                }
            }
        }
    }
    initia[j] = '\0';
    to_UpperCase(initia);
    printf("\n%s\n", initia);
}

int main()
{
    char name[20];
    printf("Enter Name: ");
    fgets(name, 20, stdin);
    printInitials(name);

    return 0;
}