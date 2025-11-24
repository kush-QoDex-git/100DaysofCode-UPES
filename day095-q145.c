// Q145: Return a structure containing top student's details from a function.

/*
Sample Test Cases:
Input 1:
3 students: Riya 101 89, Karan 102 96, Meena 103 92
Output 1:
Top Student: Karan | Roll: 102 | Marks: 96

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
typedef struct
{
    char name[20];
    char roll[4];
    float marks;
} STUDENT;
void fill_stu(STUDENT *s_list, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("\n\tFor Student No. %d: \n", i + 1);
        printf("Name: ");
        fgets(s_list->name, sizeof(s_list->name), stdin);
        rm_nl(s_list->name);
        printf("Roll: ");
        fgets(s_list->roll, sizeof(s_list->roll), stdin);
        rm_nl(s_list->roll);
        printf("Marks: ");
        scanf("%f", &s_list->marks);
        fflush(stdin);
        s_list++;
    }
}
STUDENT topper_stu(STUDENT *s_list, int n)
{
    float hi_marks = 0;
    int index;
    for (int i = 0; i < n; i++)
    {
        if (s_list[i].marks > hi_marks)
        {
            hi_marks = s_list[i].marks;
            index = i;
        }
    }
    STUDENT rs = s_list[index];
    return rs;
}

int main()
{
    STUDENT s_l[5];
    STUDENT top;
    fill_stu(s_l, 5);
    top = topper_stu(s_l, 5);
    printf("\n\nTop Student: %s | %s | %.1f |",top.name,top.roll,top.marks);

    return 0;
}