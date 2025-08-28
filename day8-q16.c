// Q16: Write a program to input three numbers and find the largest among them using if–else.

/*
Sample Test Cases:
Input 1:
3 7 5
Output 1:
Largest is 7

Input 2:
-1 -5 0
Output 2:
Largest is 0

*/
#include <stdio.h>
#include <stdlib.h>
void ask(int *num)
{
    int temp;
    char temp_c;
    char buffer;

    scanf("%c", &buffer);
    printf("DO you wanna compare more [y/n]: ");
    scanf("%c", &temp_c);

    if ((temp_c == 'y') || (temp_c == 'Y'))
    {
        printf("How many more numbers you wanna compare: ");
        scanf("%d", &temp);
        *num += temp;
    }
    else if ((temp_c != 'y') && (temp_c != 'Y') && (temp_c != 'n') && (temp_c != 'N'))
    {
        printf("!Please Enter either y or n only!");
        ask(num);
    }
    else
    {
    }
}
int num_of_elem(int* num, int inp){
    *num = inp;
}
void populate_arr(float *arr, int* size)
{
    int num_of_input = 1;
    char choi = 'n';
    int i = 0;
    printf("How many numbers you wanna compare: ");
    scanf("%d", &num_of_input);
    if (num_of_input < 2)
    {
        printf("!!you at least need 2 number to compare!!");
    }
    else
    {
        while (i < num_of_input)
        {
            for (int j = i; j < num_of_input; j++)
            {
                printf("Enter number %d: ", i + 1);
                scanf("%f", arr++);
                i++;
            }
            ask(&num_of_input);
            num_of_elem(size,num_of_input);
        }
    }
}
int main()
{
    float *inp_arr = (float *)malloc(3 * sizeof(float));
    int size;
    populate_arr(inp_arr, &size);
    float largest = 0;
    for (int i = 0; i < size; i++)
    {
        if (largest < inp_arr[i])
        {
            largest = inp_arr[i];
        }
        else
        {
        }
    }
    printf("Largest of all the given input is: %f", largest);
    return 0;
}