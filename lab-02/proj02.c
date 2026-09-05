#include <stdio.h>

int main(void) {
    int number;
    float price;
    int month, day, year;

    printf("Enter item number: ");
    scanf("%d", &number);
    printf("Enter unit price: ");
    scanf("%f", &price);
    printf("Enter purchase date (mm/dd/yyyy) : ");
    scanf("%d/%d/%d", &month, &day, &year);

    printf("Item |\t Unit Price |\t Purchase Date\n");
    printf("%d \t %.2f$ \t %.2d/%.2d/%.4d\n", number, price, month, day, year);

    return 0;
}