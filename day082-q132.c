// Q132: Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.

/*
Sample Test Cases:
Input 1:
GREEN
Output 1:
Go

*/
#include <stdio.h>

typedef enum
{
    RED,
    YELLOW,
    GREEN
} TRAFIC;
void sig(TRAFIC t)
{
    switch (t)
    {
    case 0:
        printf("Stop");
        break;
    case 1:
        printf("wait");
        break;
    case 2:
        printf("Go");
        break;

    default:
        break;
    }
}
int main()
{
    TRAFIC t = 2;
    sig(t);

    return 0;
}