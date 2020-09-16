#include <stdio.h>
#include <stdlib.h>

int main() {
	int age;
	char gender;
	
	printf("Cati ani ai?\n");
	scanf(" %d", &age);
	
	printf("Sex? (m/f)\n");
	scanf(" %c", &gender);
	
	if (age>=18) {
		printf ("Esti major");
	}
	if (age<18) {
		printf ("Esti minor");
	}
	if (gender == 'm') {
		printf(".\n");
	}
	if (gender == 'f') {
		printf("a.\n");
	}
return 0;
}
