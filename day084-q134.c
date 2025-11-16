// Q134: Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.

/*
Sample Test Cases:
Input 1:
FAILURE
Output 1:
Operation failed

*/
#include <stdio.h>

typedef enum{
    SUCCESS, FAILURE, TIMEOUT
} STATUS;
void prints(STATUS s){
    switch (s)
    {
    case SUCCESS:
     printf("SUCCESS");
        break;
    case FAILURE:
     printf("FAILURE");
        break;
    case TIMEOUT:
     printf("TIMEOUT");
        break;
    
    default:
        break;
    }
}
int main(){
    STATUS s = SUCCESS;
    prints(s);

    return 0;
}