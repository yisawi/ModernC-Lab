#include <stdio.h>

int main(void) {
    
    int gs_prefix, group_id, pub_code, item_num, check_digit;
    printf("Enter ISBN example | 978-0-393-97950-3 | :  ");
    scanf("%d-%d-%d-%d-%d", &gs_prefix, &group_id, &pub_code, &item_num, &check_digit);

    printf("GS1 prefix: %d\n", gs_prefix);
    printf("Group identifier: %d\n", group_id);
    printf("Publisher code: %d\n", pub_code);
    printf("Item number: %d\n", item_num);
    printf("Check digit: %d\n", check_digit);

    return 0;
}