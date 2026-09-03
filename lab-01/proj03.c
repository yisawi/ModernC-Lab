#include <stdio.h>

int main(void) {
    /**********************************************************
    * Name: proj03 *
    * Purpose: display the amount with 5% tax added. *
    * Author: Me *
    **********************************************************/
    float amount;
    printf("Enter dollars-and-cents amount: ");
    scanf("%f", &amount);
    printf("With tax added: $%.2f\n", amount * 1.05f);

    return 0;
}