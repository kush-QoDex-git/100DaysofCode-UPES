// Q127: Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt.

/*
Sample Test Cases:
Input 1:
Input File (input.txt): Hello World\nC programming
Output 1:
Output File (output.txt): HELLO WORLD\nC PROGRAMMING

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
void toLower(int *c)
{
    if (*c > 64 && *c < 91)
    {
        *c = *c + 32;
    }
}
void readFileToLower(char *fileName)
{
    FILE *fptr = fopen(fileName, "r");
    int ch;
    if (fptr)
    {
        while (ch != EOF)
        {
            ch = fgetc(fptr);
            toLower(&ch);
            printf("%c", ch);
        }
    }
    else
    {
        printf("\n\t! Error: File Does NOT Exists !");
    }
}
int main()
{
    char file_name[30];
    printf("Enter the file name: ");
    fgets(file_name, sizeof(file_name), stdin);
    rm_nl(file_name);
    readFileToLower(file_name);
    return 0;
}