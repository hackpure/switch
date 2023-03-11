// C Program To Input Day Number Of A Week and Print Its Name Using switch

#include <stdio.h>

int main() {
    int day;
    printf("Enter The Day Number Of A Week : ");
    scanf("%d", &day);
    switch(day){
        case 1:
        printf("Monday");
        break;
        case 2:
        printf("Tuesday");
        break;
        case 3:
        printf("Wednesday");
        break;
        case 4:
        printf("Thursday");
        break;
        case 5:
        printf("Friday");
        break;
        case 6:
        printf("Saturday");
        break;
        case 7:
        printf("Sunday");
        break;
        default:
        printf("Enter Number Between 1 - 7");
    }
    return 0;
}