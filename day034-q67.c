// Q67: Insert an element in an array at a given position.

/*
Sample Test Cases:
Input 1:
4
10 20 30 40
2 15
Output 1:
10 20 15 30 40

*/
#include <stdio.h>

void right_shift_array(int* arr,int* len,int index){
    for (int i = *len; i > index; i--)
    {
        arr[i]=arr[i-1];
    }
    arr[index]=0;
    ++(*len);
}
void insert_at_in_array(int* arr, int* len,int pos,int elem){
    right_shift_array(arr,len,pos);
    arr[pos]=elem;
}
void fill_array(int *arr, int size)
{
    printf("\tInput elements for the array.\n");
    for (int i = 0; i < size; i++)
    {
        printf("Element at index %d: ", i);
        scanf("%d", &arr[i]);
    }
}
void print_arr(int *arr, int size)
{
    printf("\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main(){
    
    int len,pos, i_elem;
    printf("Enter the length of the array: ");
    scanf("%d", &len);
    int arr1[len+1];
  
    fill_array(arr1, len);
    printf("\nEnter the index and number you wanna insert in the array: ");
    scanf("%d %d", &pos,&i_elem);
    insert_at_in_array(arr1,&len,pos,i_elem);
    print_arr(arr1, len);

    return 0;
}