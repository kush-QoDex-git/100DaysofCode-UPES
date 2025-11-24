// Q143: Find and print the student with the highest marks.

/*
Sample Test Cases:
Input 1:
3 students: Ravi 101 95, Sita 102 85, Aman 103 88
Output 1:
Topper: Ravi (Marks: 95)

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
    float hi_marks=0;
    int index;
    for (int i = 0; i < n; i++)
    {
        if (s_list[i].marks>hi_marks)
        {
            hi_marks=s_list[i].marks;
            index=i;
        }
        
    }
    printf("\n\nTopper : %s (%.1f)",s_list[index].name,s_list[index].marks);
}

int main(){
    STUDENT s_l[5];
    fill_stu(s_l,5);
    print_stu(s_l,5);

    return 0;
}