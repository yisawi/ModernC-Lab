#include <stdio.h>

/**********************************************************
 * Name: proj06                                           *
 * Purpose: Calculates the remaining balance on a loan    *
 *          after the first, second, and third payments.  *
 * Author: Me                                             *
 **********************************************************/
int main(void) {
    float loan, rate, monthly_payment;
    float monthly_rate;

    
    printf("Enter amount of loan: ");
    scanf("%f", &loan);

    printf("Enter interest rate: ");
    scanf("%f", &rate);

    printf("Enter monthly payment: ");
    scanf("%f", &monthly_payment);

    
    monthly_rate = (rate / 100.0f) / 12.0f;

    
    loan = (loan - monthly_payment) + (loan * monthly_rate);
    printf("Balance remaining after first payment: $%.2f\n", loan);

    
    loan = (loan - monthly_payment) + (loan * monthly_rate);
    printf("Balance remaining after second payment: $%.2f\n", loan);

    
    loan = (loan - monthly_payment) + (loan * monthly_rate);
    printf("Balance remaining after third payment: $%.2f\n", loan);

    return 0;
}