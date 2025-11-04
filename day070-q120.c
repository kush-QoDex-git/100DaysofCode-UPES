// Q120: Write a program to take a string input. Change it to sentence case.

/*
Sample Test Cases:
Input 1:
str = I am trying to build logic.
Output 1:
I Am Trying To Build Logic

Input 2:
str = The classes are supposed to start early.
Output 2:
The Classes Are Supposed To Start Early.

Input 3:
str = We are going to look at 26 different test cases.
Output 3:
We Are Going To Look At 26 Different Test Cases.

*/
#include <stdio.h>
void sentence_case(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i - 1] == ' ' && (((int)str[i] > 96) && ((int)str[i] < 123)))
        {
            str[i] = (char)((int)str[i] - 32);
        }
        i++;
    }
    printf("%s\n", str);
}

int main()
{
    char str1[] = "I am trying to build logic.";
    char str2[] = "The classes are supposed to start early.";
    char str3[] = "We are going to look at 26 different test cases.";
    sentence_case(str1);
    sentence_case(str2);
    sentence_case(str3);

    return 0;
}