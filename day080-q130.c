// Q130: Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.

/*
Sample Test Cases:
Input 1:
Student 1 → Name: Asha, Roll: 101, Marks: 85; Student 2 → Name: Ravi, Roll: 102, Marks: 92
Output 1:
Name: Asha | Roll: 101 | Marks: 85
Name: Ravi | Roll: 102 | Marks: 92

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
void add_record(char *filename)
{
    FILE *fptr = fopen(filename, "a");
    char n;
    char name[20], roll[4];
    float marks;
    int i = 1;
    do
    {
        printf("\t\tStudent no. %d\n", i);
        printf("Enter name: ");
        fgets(name, sizeof(name), stdin);
        rm_nl(name);
        printf("Enter Roll No.: ");
        fgets(roll, sizeof(roll), stdin);
        rm_nl(roll);
        printf("Enter Marks: ");
        scanf("%f", &marks);
        fflush(stdin);
        printf("Add More [y/n]: ");
        scanf("%c", &n);
        fflush(stdin);
        i++;
        fprintf(fptr, "Name: %s | Roll: %s | Marks: %.2f\n", name, roll, marks);
    } while (n == 'y' || n == 'Y');
    fclose(fptr);
}
int main()
{
    char file[20] = "stuRec.txt";
    add_record(file);

    return 0;
}