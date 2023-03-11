// C Program To Check Whether A Character Is Vowel Or Consonant Using switch

#include <stdio.h>

int main() {
	char c;
	printf("Enter Your Alphabet : ");
	scanf("%c", &c);
	if((c >= 'A' && c >= 'Z') ||(c >= 'a' && c >= 'z')){
		switch(c){
			case 'A':
			case 'E':
			case 'I':
			case 'O':
			case 'U':
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
				printf("%c Is A Vowel.", c);
				break;
			default:
				printf("%c Is A Consonant.", c);
		}
	}
	else {
		printf("%c Is Not An Alphabet.", c);
	}
	return 0;
}