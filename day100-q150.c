// Q150: Use pointer to struct to modify and display data using -> operator.

/*
Sample Test Cases:
Input 1:
Student pointer modifying values: John 106 91
Output 1:
Modified Data: Name: John | Roll: 106 | Marks: 91

*/
#include <stdio.h>
#include <string.h>

typedef struct
{
    char name[20];
    char roll[4];
    float marks;
} stu;

int main(){
    stu s1={"mika","101",45};
    stu* sptr = &s1;
    strcpy(sptr->name,"miho");
    printf("Name: %s | Roll: %s | Marks: %.1f", s1.name, s1.roll, s1.marks);


    return 0;
}