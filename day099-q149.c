// Q149: Use malloc() to allocate structure memory dynamically and print details.

/*
Sample Test Cases:
Input 1:
Student allocated dynamically with details: Tina 105 88
Output 1:
Name: Tina | Roll: 105 | Marks: 88

*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char name[20];
    char roll[4];
    float marks;
} stu;

int main()
{
    stu *s1 = (stu *)(malloc(sizeof(stu)));
    strcpy(s1->name, "Tina");
    strcpy(s1->roll, "105");
    s1->marks = 88;
    printf("Name: %s | Roll: %s | Marks: %.1f", s1->name, s1->roll, s1->marks);

    return 0;
}