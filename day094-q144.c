// Q144: Write a function that accepts a structure as parameter and prints its members.

/*
Sample Test Cases:
Input 1:
Student: Neha 104 92
Output 1:
Name: Neha | Roll: 104 | Marks: 92

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
    for (int i = 0; i < n; i++)
    {
        printf("\n\tFor Student No. %d: \n",i+1);;
        printf("Name: %s |",s_list->name);
        printf("Roll: %s |",s_list->roll);
        printf("Marks: %.1f\n",s_list->marks);
        s_list++;
    }
    
}

int main(){
    STUDENT s_l[2];
    fill_stu(s_l,2);
    print_stu(s_l,2);

    return 0;
}