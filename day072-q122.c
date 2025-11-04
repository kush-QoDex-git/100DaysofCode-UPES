// Q122: Write a C program that opens an existing file (e.g., info.txt) and reads its contents using fgets(). The program should print all the lines to the console until EOF (end of file) is reached.

/*
Sample Test Cases:
Input 1:
File: info.txt (Content: Name: Rahul\nAge: 23)
Output 1:
Name: Rahul
Age: 23

*/
#include <stdio.h>
void read_file(char *filename)
{
    FILE *file = fopen(filename, "r");
    char line[100];
    while (fgets(line, sizeof(line), file))
    {
        printf("%s", line);
    }
}
int main()
{
    read_file("./info.txt");
    return 0;
}