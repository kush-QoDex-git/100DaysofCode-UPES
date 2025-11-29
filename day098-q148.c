// Q148: Take two structs as input and check if they are identical.

/*
Sample Test Cases:
Input 1:
Student1: Asha 101 90
Student2: Asha 101 90
Output 1:
Same

*/
#include <stdio.h>
#include <string.h>

typedef struct
{
    char name[20];
    char roll[4];
    float marks;
} stu;
int identical_stu(stu s1, stu s2){
    if (strcmp(s1.name,s2.name)==0 && strcmp(s1.roll,s2.roll)==0 && s1.marks==s2.marks)
    {
        return 1;
    }
    return 0;
}
int main()
{
    stu s1={"mika","101",45},s2={"mika","101",45};
    
    if (identical_stu(s1,s2))
    {
        printf("Same");
    }
    
    

    return 0;
}