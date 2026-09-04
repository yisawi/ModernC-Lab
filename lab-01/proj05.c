#include <stdio.h>

/**********************************************************
 * Name: proj05                                           *
 * Purpose: Computes the smallest number of $20, $10, $5, *
 *          and $1 bills needed to pay a dollar amount.   *
 * Author: Me                                             *
 **********************************************************/
int main(void) {
    int amount;
    int bills_20, bills_10, bills_5, bills_1;

    printf("Enter a dollar amount: ");
    scanf("%d", &amount);

    
    bills_20 = amount / 20;
    amount = amount - (bills_20 * 20);

    
    bills_10 = amount / 10;
    amount = amount - (bills_10 * 10);

    
    bills_5 = amount / 5;
    amount = amount - (bills_5 * 5);

    
    bills_1 = amount;

    // طباعة النتيجة
    printf("$20 bills: %d\n", bills_20);
    printf("$10 bills: %d\n", bills_10);
    printf("$5 bills: %d\n", bills_5);
    printf("$1 bills: %d\n", bills_1);

    return 0;
}