// Q121: Write a C program that creates a text file named info.txt in write mode. The program should take the user’s name and age as input, and write them to the file using fprintf(). After writing, display a message confirming that the data was successfully saved.

/*
Sample Test Cases:
Input 1:
Name: Rahul, Age: 23
Output 1:
File created successfully! Data written to info.txt

*/
#include <stdio.h>
void add_info()
{
    char name[30];
    int age;
    printf("\nEnter Name: ");
    fgets(name, sizeof(name), stdin);
    int i = 0;
    while (1)
    {
        if (name[i] == '\n')
        {
            name[i] = '\0';
            break;
        }
        i++;
    }

    printf("\nEnter age: ");
    scanf("%d", &age);

    FILE *info_file = fopen("./info.txt", "a");
    fprintf(info_file, "%s\t%d", name, age);
    printf("\nData was successfully saved.");
    fclose(info_file);
}

int main()
{
    add_info();
    return 0;
}