// Q124: Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().

/*
Sample Test Cases:
Input 1:
Source File: source.txt (Content: Learning C File Handling)
Output 1:
File copied successfully to destination.txt

*/
#include <stdio.h>

void cpy_file(char *source, char *destination)
{
    FILE *source_file = fopen(source, "r");
    if (!source_file)
    {
        printf("! Error in opening Source File !");
    }
    FILE *desti_file = fopen(destination, "w");

    int ch;
    while (ch != EOF)
    {
        ch = fgetc(source_file);
        fputc(ch, desti_file);
    }
    fclose(source_file);
    fclose(desti_file);
    printf("File copied successfully to %s",destination);
}

int main()
{
    cpy_file("./info.txt", "copy.txt");

    return 0;
}