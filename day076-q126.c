// Q126: Ask the user for a filename. Check if it exists by trying to open it in read mode. If the file pointer is NULL, print an error message; otherwise, read and display its content.

/*
Sample Test Cases:
Input 1:
Filename: sample.txt (File Exists: Yes)
Output 1:
File opened successfully.
(Displays file content)

Input 2:
Filename: nofile.txt (File Exists: No)
Output 2:
Error: File does not exist!

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
int main()
{
    char file_name[30];
    printf("Enter the file name: ");
    fgets(file_name, sizeof(file_name), stdin);
    rm_nl(file_name);
    FILE *fileptr = fopen(file_name, "r");
    char ch;
    if (fileptr)
    {
        while (ch != EOF)
        {
            ch = fgetc(fileptr);
            printf("%c", ch);
        }
    }
    else
    {
        printf("\n\t! Error: File Does NOT Exists !");
    }

    return 0;
}