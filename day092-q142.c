// Q142: Store details of 5 students in an array of structures and print all.

/*
Sample Test Cases:
Input 1:
Details of 5 students (Name, Roll, Marks)
Output 1:
Tabular list of all 5 students with their details

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
typedef struct{
    char name[20];
    char roll[4];
    float marks;
} STUDENT;
void fill_stu(STUDENT* s_list, int n){
    for (int i = 0; i < n; i++)
    {
        printf("\n\tFor Student No. %d: \n",i+1);;
        printf("Name: ");
        fgets(s_list->name,sizeof(s_list->name),stdin);
        rm_nl(s_list->name);
        printf("Roll: ");
        fgets(s_list->roll,sizeof(s_list->roll),stdin);
        rm_nl(s_list->roll);
        printf("Marks: ");
        scanf("%f",&s_list->marks);
        fflush(stdin);
        s_list++;
    }
    
}
void print_stu(STUDENT* s_list, int n){
    printf("|\t\tName\t\t|\t\tRoll\t\t|\t\tMArks\t\t|\n",s_list->name);
    for (int i = 0; i < n; i++)
    {
        printf("|\t\t%s\t\t|\t\t%s\t\t|\t\t%.1f\t\t|\n",s_list->name,s_list->roll,s_list->marks);
        s_list++;
    }
    
}

int main(){
    STUDENT s_l[5];
    fill_stu(s_l,5);
    print_stu(s_l,5);

    return 0;
}