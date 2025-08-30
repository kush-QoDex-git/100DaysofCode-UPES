//Q5: Write a program to convert temperature from Celsius to Fahrenheit.

/*
Sample Test Cases:
Input 1:
0
Output 1:
Fahrenheit=32

Input 2:
100
Output 2:
Fahrenheit=212

*/
#include <stdio.h>
float celcTofahrein(float c){
    float f = 32 + (c*(1.8));
    return f;
}

int main(){
    float cel;
    printf("Enter the temperature in celsius: ");
    scanf("%f",&cel);
    printf("Temperature in fahrenheit is: %f", celcTofahrein(cel));

    return 0;
}
