// Q146: Create Employee structure with nested Date structure for joining date and print details.

/*
Sample Test Cases:
Input 1:
Employee: Raj | ID: 11 | Joining Date: 12 05 2020
Output 1:
Name: Raj | ID: 11 | Joining Date: 12/05/2020

*/
#include <stdio.h>

typedef struct
{
    int mday;
    int month;
    int year;
} MDATE;

typedef struct
{
    char name[20];
    int id;
    MDATE joining;
} EMPLOYEE;
void fill_emp(EMPLOYEE *emp_list, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("\n\tFor Student No. %d: \n", i + 1);
        printf("Name: ");
        fgets(emp_list->name, sizeof(emp_list->name), stdin);
        rm_nl(emp_list->name);
        printf("ID: ");
        scanf("%d", &emp_list->id);
        fflush(stdin);
        printf("Joining Date: ");
        scanf("%d %d %d", &emp_list->joining.mday, &emp_list->joining.month, &emp_list->joining.year);
        fflush(stdin);
        emp_list++;
    }
}
void print_emp(EMPLOYEE *emp_list, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Name: %s |", emp_list->name);
        printf("ID: %d |", emp_list->id);
        printf("Joining date: %d/%d/%d\n", emp_list->joining.mday, emp_list->joining.month, emp_list->joining.year);
        emp_list++;
    }
}
int main()
{
    EMPLOYEE ep_list[2];
    fill_emp(ep_list, 1);
    print_emp(ep_list, 1);

    return 0;
}