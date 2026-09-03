#include <stdio.h>

#define PI 3.14159265f

int main(void) {
    /**********************************************************
    * Name: proj02 *
    * Purpose: computes the volume of a sphere. *
    * Author: Me *
    **********************************************************/
    float v, r;
    
    printf("Enter the Radius: ");
    scanf("%f", &r);

    v = (4.0f / 3.0f) * PI * r * r * r;
    printf("The volume of a sphere is: %.2f\n", v);
    
}