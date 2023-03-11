// C Program To Check Whether The Given Number Is Positive Negative Or Zero Using switch

#include <stdio.h>

int main() {
    int num;
    printf("Enter Your Number : ");
    scanf("%d", &num);
    switch(num > 0){
        case 0:
        switch(num == 0){
            case 1:
            printf("%d Is Zero", num);
            break;
            default:
            printf("%d Is Negative", num);
        }
        break;
        case 1:
        printf("%d Is Positive");
        break;
        default:
        printf("%d Is Negative", num);
    }
	return 0;
}