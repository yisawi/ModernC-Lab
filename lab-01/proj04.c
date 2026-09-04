#include <stdio.h>

int main(void) {
    /**********************************************************
    * Name: proj04 *
    * Purpose: Display the value of polynomial equation. *
    * Author: Me *
    **********************************************************/

    int x, eq;
    printf("Enter the value of x: ");
    scanf("%d", &x);
    eq = (((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6);
    printf("the result is: %d\n", eq);
    
    return 0;
}