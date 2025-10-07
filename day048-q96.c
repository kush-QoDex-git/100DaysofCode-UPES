// Q96: Reverse each word in a sentence without changing the word order.

/*
Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc

*/
#include <stdio.h>

int seofw(char ch)
{
    if (ch == ' ' || ch == ',' || ch == '.' || ch == '!')
    {
        return 1;
    }

    return 0;
}

void reverse_each_word_in_sent(char *str)
{
    int i = 0, sofw_i, eofw_i;
    while (str[i] != '\n' && str[i] != '\0')
    {
        if ((i == 0) && (seofw(str[0]) == 0))
        {
            sofw_i = i;
        }
        else if ((i > 0) && (seofw(str[i - 1]) == 1) && (seofw(str[i]) == 0))
        {
            sofw_i = i;
        }
        else
        {
            i++;
            continue;
        }
        eofw_i = sofw_i + 1;
        while ((seofw(str[eofw_i]) == 0) && (str[eofw_i] != '\n') && (str[eofw_i] != '\0'))
        {
            eofw_i++;
        }
        eofw_i--;
        char temp;
        for (int j = 0; j < (eofw_i - sofw_i + 1) / 2; j++)
        {
            temp = str[sofw_i + j];
            str[sofw_i + j] = str[eofw_i - j];
            str[eofw_i - j] = temp;
        }
        i = eofw_i + 1;
    }
}

int main()
{
    char str[50];
    printf("Enter sentence: ");
    fgets(str,50,stdin);
    reverse_each_word_in_sent(str);
    printf("%s",str);

    return 0;
}