// Q94: Find the longest word in a sentence.

/*
Sample Test Cases:
Input 1:
I love programming
Output 1:
programming

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
void slice_str(char *str, int start_in, int end_in, char *sub_str)
{
    int j = 0;
    for (int i = start_in; i <= end_in; i++)
    {
        sub_str[j] = str[i];
        j++;
    }
}
int seofw(char ch)
{
    if (ch == ' ' || ch == ',' || ch == '.' || ch == '!')
    {
        return 1;
    }

    return 0;
}
void longest_word_in_sent(char *sent)
{
    // seofw include special characters ecept [, . !  ]
    int sent_len = str_len(sent);
    int w_len;
    int lw_len = 0, start_i_lw, end_i_lw;

    int i = 0, sofw_i, eofw_i;
    while (sent[i] != '\n' && sent[i] != '\0')
    {
        if ((i == 0) && (seofw(sent[0]) == 0))
        {
            sofw_i = i;
        }
        else if ((i > 0) && (seofw(sent[i - 1]) == 1) && (seofw(sent[i]) == 0))
        {
            sofw_i = i;
        }
        else
        {
            i++;
            continue;
        }
        eofw_i = sofw_i + 1;
        while ((seofw(sent[eofw_i]) == 0) && (sent[eofw_i] != '\n') && (sent[eofw_i] != '\0'))
        {
            eofw_i++;
        }
        eofw_i--;
        i = eofw_i + 1;
        w_len = eofw_i - sofw_i + 1;
        if (w_len > lw_len)
        {
            start_i_lw = sofw_i;
            end_i_lw = eofw_i;
            lw_len = w_len;
        }
    }
    char lw_str[lw_len + 1];
    slice_str(sent, start_i_lw, end_i_lw, lw_str);
    lw_str[lw_len] = '\0';
    printf("%s ", lw_str);
}
int main()
{

    char sent[50];
    printf("Enter a sentence: ");
    fgets(sent, 50, stdin);
    longest_word_in_sent(sent);
    return 0;
}