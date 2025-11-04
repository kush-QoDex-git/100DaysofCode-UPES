// Q123: Read a text file and count the total number of characters, words, and lines. A word is defined as a sequence of non-space characters separated by spaces or newlines.

/*
Sample Test Cases:
Input 1:
File: sample.txt (Content: Hello world\nThis is C programming)
Output 1:
Characters: 31
Words: 5
Lines: 2

*/
#include <stdio.h>

void num_of_c_w_l(char *filename, int *c, int *w, int *l)
{
    FILE *file = fopen(filename, "r");
    *c = 0;
    *w = 0;
    *l = 0;
    char ch;
    while (fscanf(file, "%c", &ch) != EOF)
    {
        ++(*c);
    }
    fclose(file);

    file = fopen(filename, "r");
    char word[100];
    while (fscanf(file, "%s", word) != EOF)
    {
        ++(*w);
    }
    fclose(file);
    file = fopen(filename, "r");
    while (fscanf(file, "%c", &ch) != EOF)
    {
        if (ch == '\n')
        {
            ++(*l);
        }
    }
    ++(*l);
    printf("Characters: %d\nWords: %d\nLines: %d", *c, *w, *l);
    fclose(file);
}

int main()
{
    int c, w, l;
    num_of_c_w_l("./info.txt", &c, &w, &l);
    return 0;
}