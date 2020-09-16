#include <stdio.h>
#include <stdlib.h>

int main() {
	int a, b;
	
	printf("a=");
	scanf(" %d", &a);
	printf("b=");
	scanf(" %d", &b);
	
	if (a == b) {
		printf("%d = %d\n", a, b);
	} else (a > b) ? printf ("%d > %d\n", a, b) : printf("%d < %d\n", a, b);
	
	printf("++a * b = %d (a=%d+1)\n", ++a * b, a);
	printf("a=%d\n",a);
	printf("a++ * b = %d (a*b, a=%d+1)\n", a++ * b, a);
	printf("a=%d\n",a);
	printf("a*b=%d\n", a*b);
return 0;
}
