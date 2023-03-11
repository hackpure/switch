// C Program To Check Whether A Number Is Even Or Odd Using switch

#include <stdio.h>

int main() {
    int num;
    printf("Enter Your Number : ");
    scanf("%d", &num);
    switch(num % 2){
    case 0:
    printf("%d Is Even", num);
    break;
    case 1:
    printf("%d Is Odd", num);
    }
	return 0;
}