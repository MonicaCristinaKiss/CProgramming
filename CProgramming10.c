#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
	int a;
	printf("Enter a character: ");
	scanf(" %c", &a);
	
	if (isalpha(a)) {
		if (isupper(a)){
			printf("%c is an upper case letter.\n",a);
		}else {
			printf("%c is a lower case letter.\n",a);
		}	
	}else if (isdigit(a)) {
		printf("%c is a number.\n",a);
	}else {
		printf("%c is a special character.\n",a);
	}
return 0;
}
