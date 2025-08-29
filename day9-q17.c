// Q17: Write a program to find the roots of a quadratic equation and categorize them.

/*
Sample Test Cases:
Input 1:
1 -3 2
Output 1:
Roots are real and different: 2, 1

Input 2:
1 -2 1
Output 2:
Roots are real and same: 1

Input 3:
1 2 5
Output 3:
Roots are complex

*/

#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, descriminant, root1, root2;
    int type;
    printf("\n!For correct answer Please enter as!-\n\t---[a]x^2 + [b]x + [c]---\n");
    printf("Input for a: ");
    scanf("%f", &a);
    printf("Input for b: ");
    scanf("%f", &b);
    printf("Input for c: ");
    scanf("%f", &c);
    descriminant = ((b * b) - 4 * a * c);
    if (descriminant >= 0)
    {
        root1 = ((-b) + (pow(descriminant, 0.5))) / (2 * a);
        root2 = ((-b) - (pow(descriminant, 0.5))) / (2 * a);
        if (descriminant > 0)
        {
            printf("Roots are real and different: %f , %f", root1, root2);
        }
        else
        {
            printf("Roots are real and equal: %f", root1);
        }
    }
    else
    {
        printf("Roots are complex: (-%f+((%f)^0.5))/(2*%f) , (-%f+((%f)^0.5))/(2*%f)", b, descriminant, a, b, descriminant, a);
    }

    return 0;
}