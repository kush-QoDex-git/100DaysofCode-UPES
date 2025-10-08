// Q98: Print initials of a name with the surname displayed in full.

/*
Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe
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
void slice_str(char *str, int start_in, int end_in, char *sub_str)
{
    int j = 0;
    for (int i = start_in; i <= end_in; i++)
    {
        sub_str[j] = str[i];
        j++;
    }
}
void printInitials(char *str)
{
    int i = 0, sur_i;
    char initia[5];
    char sur[10];
    int j = 0;
    while (str[i] != '\0' && str[i] != '\n')
    {
        if (!(((int)str[i] > 64 && (int)str[i] < 91) || ((int)str[i] > 96 && (int)str[i] < 123)) && (int)str[i] != 32)
        {
            printf("\n\t\t %dSpecial characters are not allowed.\n", i);
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
                    sur_i = i;
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
    slice_str(str, sur_i, i, sur);
    if ((int)sur[0] > 96 && (int)str[0] < 123)
    {
        sur[0] = (char)((int)sur[0] - 32);
    }

    to_UpperCase(initia);
    printf("\n%s  %s\n", initia, sur);
}

int main()
{
    char name[20];
    printf("Enter Name: ");
    fgets(name, 20, stdin);
    printInitials(name);

    return 0;
}