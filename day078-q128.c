// Q128: Read a text file and count how many vowels and consonants are in the file. Ignore digits and special characters.

/*
Sample Test Cases:
Input 1:
File: text.txt (Content: Welcome to C language)
Output 1:
Vowels: 8
Consonants: 10

*/

#include <stdio.h>
void rm_nl(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == '\n')
        {
            str[i] = '\0';
        }
        i++;
    }
}
void vowel_consonant_in_a_file()
{
    char file_name[30];
    printf("Enter the file name: ");
    fgets(file_name, sizeof(file_name), stdin);
    rm_nl(file_name);
    int vow=0,conso=0;
    FILE *fileptr = fopen(file_name, "r");
    char ch;
    if (fileptr)
    {
        while (ch != EOF)
        {
            ch = fgetc(fileptr);
            if ((ch > 64 && ch < 91) || (ch > 96 && ch < 123))
            {
                
                if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
                {
                    ++(vow);
                }
                else
                {
                    ++(conso);
                }
            }
        }
    }
    else
    {
        printf("\n\t! Error: File Does NOT Exists !");
    }
    fclose(fileptr);
    printf("Vowels: %d\n",vow);
    printf("Consonants: %d\n",conso);
}


int main()
{
    vowel_consonant_in_a_file();


    return 0;
}