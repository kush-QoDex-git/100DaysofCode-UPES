// Q129: A file numbers.txt contains a list of integers separated by spaces. Read all integers, compute their sum and average, and print both.

/*
Sample Test Cases:
Input 1:
File: numbers.txt (Content: 10 20 30 40 50)
Output 1:
Sum = 150
Average = 30.00

*/
#include <stdio.h>

int main(){
    FILE* fptr = fopen("numbers.txt","r");
    int num,count=0;
    float sum=0;
    while (fscanf(fptr,"%d",&num)>0)
    {
        sum+=(float)num;
        count++;
    }
    printf("\n\tSum = %.f\n\tAverage = %f",sum,(sum/count));

    return 0;
}