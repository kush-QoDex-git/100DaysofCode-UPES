// Q147: Store employee data in a binary file using fwrite() and read using fread().

/*
Sample Test Cases:
Input 1:
Employee details entered and stored in file.
Output 1:
Displays employee data read from file.

*/
#include <stdio.h>

typedef struct
{
    char name[20];
    char phno[11];
    float salary;
} EMP;

int main()
{
    EMP e1 = {.name = "rohit", "2346578091", 230000};
    FILE *dataf = fopen("empdata.dat", "ab");
    fwrite(&e1, sizeof(EMP), 1, dataf);
    fclose(dataf);

    EMP e2;
    dataf = fopen("empdata.dat", "rb");
    fread(&e2, sizeof(EMP), 1, dataf);
    fclose(dataf);

    return 0;
}