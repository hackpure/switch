// C Program For A Simple Calculator Using switch

#include <stdio.h>

int main() {
	int choice, num1, num2;
	printf("[1] Addition\n");
	printf("[2] Subtraction\n");
	printf("[3] Multiplication\n");
	printf("[4] Division\n");
	printf("Enter The Arithematic Operation You Want To Perform : ");
	scanf("%d", &choice);
	printf("Enter The First Number : ");
	scanf("%d", &num1);
	printf("Enter The Second Number : ");
	scanf("%d", &num2);
	switch(choice){
		case 1:
			printf("Addition Of %d and %d Is = %d", num1, num2, num1 + num2);
			break;
		case 2:
			printf("Subtraction Of %d and %d Is = %d", num1, num2, num1 - num2);
			break;
		case 3:
			printf("Multiplication Of %d and %d Is = %d", num1, num2, num1 * num2);
			break;
		case 4:
			printf("Division Of %d and %d Is = %d", num1, num2, num1 / num2);
			break;
		default:
			printf("Invalid Choice\nPlease Choose Between 1 - 4.");
	}
}