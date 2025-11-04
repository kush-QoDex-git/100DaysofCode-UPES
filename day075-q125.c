// Q125: Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.

/*
Sample Test Cases:
Input 1:
Existing File: data.txt (Content before execution: Hello world)
User Input: This is appended text.
Output 1:
File updated successfully with appended text.

*/
#include <stdio.h>

int main()
{
    FILE *file = fopen("q-125.txt", "a");
    char line[100];
    printf("User input: ");
    fgets(line, sizeof(line), stdin);
    fputs(line, file);
    return 0;
}