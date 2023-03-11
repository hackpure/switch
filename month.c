// C Program To Input Month Number And Print Total Number Of Days In It Using switch

#include <stdio.h>

int main() {
    int month_number;
    printf("Enter The Month Number Of A Year : ");
    scanf("%d", &month_number);
    switch(month_number){
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
        printf("31");
        break;
        case 2:
        printf("28/29");
        break;
        case 4:
        case 6:
        case 9:
        case 11:
        printf("30");
        break;
        default:
        printf("Enter Number Between 1 - 12");
    }
    return 0;
}