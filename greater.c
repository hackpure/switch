// C Program To Check The Greatest Of Two Numbers Using switch

#include <stdio.h>

int main() {
    int a, b;
    printf("Enter Your First Number : ");
    scanf("%d", &a);
    printf("Enter Your Second Number : ");
    scanf("%d", &b);
    switch(a < b){
        case 0:
        printf("%d Is Greater", a);
        break;
        case 1:
        printf("%d Is Greater", b);
    }
	return 0;
}