// C Program To Calculate Roots Of A Quadratic Equation Using switch

#include <stdio.h>
#include <math.h>

int main() {
	float a, b, c, discriminant, root1, root2, imgRoot, realRoot;
	printf("Enter The Value Of a : ");
	scanf("%f", &a);
	printf("Enter The Value Of b : ");
	scanf("%f", &b);
	printf("Enter The Value Of c : ");
	scanf("%f", &c);
	printf("Your Equation Is : %fx² + %fy + %f = 0\n", a, b, c);
	discriminant = sqrt(b*b - (4 * a * c));
	switch(discriminant > 0){
		case 0:
			switch(discriminant == 0){
				case 1:
					printf("Discriminant : %f\n", discriminant);
					root1 = (-(b) + discriminant) / (2 * a);
					root2 = root1;
					printf("Root 1 : %.2f\nRoot 2 : %.2f", root1, root2);
					break;
				default:
					discriminant = sqrt(-(b * b - (4 * a * c))) / (2 * a);
					printf("%f\n", discriminant);
					realRoot = -b / (2 * a);
					imgRoot = sqrt(-(b * b - (4 * a * c))) / (2 * a);
					printf("%.2f±%.2fj", realRoot, imgRoot);
			}
			break;
		case 1:
			printf("Discriminant : %f\n", discriminant);
			root1 = (-(b) + discriminant) / (2 * a);
			root2 = (-(b) - discriminant) / (2 * a);
			printf("Root 1 : %.2f\nRoot 2 : %.2f", root1, root2);
			break;
	}
	return 0;
}