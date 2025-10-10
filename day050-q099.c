// Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.

/*
Sample Test Cases:
Input 1:
15/04/2025
Output 1:
15-Apr-2025

*/
#include <stdio.h>
#include <string.h>
int str_to_int(char *str)
{
    int i = 0, r = 0, dig;

    while (str[i] != '\0' && str[i] != '\n')
    {
        dig = (int)(str[i]) - 48;
        r = (r + dig) * 10;
        i++;
    }
    r = r / 10;
    return r;
}
void change_format_of_date(char *str)
{
    int i = 0;
    int dim = 0;
    char mons[12][4] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
    char day[3];
    char month[3];
    char year[5];
    int j = 0;
    while (str[i] != '\0' && str[i] != '\n')
    {
        if (str[i] == '/' || str[i] == '-')
        {
            if (dim == 0)
            {
                day[j] = '\0';
            }
            else if (dim == 1)
            {
                month[j] = '\0';
            }
            else
            {
            }
            dim++;
            j = 0;
        }
        else
        {
            if (dim == 0)
            {
                day[j] = str[i];
                j++;
            }
            else if (dim == 1)
            {
                
                month[j] = str[i];
                j++;
            }
            else if (dim == 2)
            {
                year[j] = str[i];
                j++;
            }
            else
            {
            }
        }
        i++;
    }
    year[j] = '\0';
    char new_date[15]="\0";
    strcat(new_date, day);
    strcat(new_date, "-");
    strcat(new_date, mons[str_to_int(month) - 1]);
    strcat(new_date, "-");
    strcat(new_date, year);
    printf("\n\t%s\n", new_date);
}
int main()
{
    char date[15];
    printf("Enter the DATE: ");
    fgets(date, 15, stdin);
    change_format_of_date(date);

    return 0;
}