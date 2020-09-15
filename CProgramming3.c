#include <stdio.h>
#include <stdlib.h>

int main() {
	char name[20];
	int age;
	float a,b;
	printf("What is your name?\n");
	scanf("%s", name);
	printf("How old are you?\n");
	scanf("%d", &age);
	printf("Your name is %s and you are %d years old.\n", name, age);
	printf("%d MOD 2 = %d\n",age,age%2);
	printf("a=");
	scanf("%f", &a);
	printf("b=");
	scanf("%f", &b);
	printf("%.0f + %.0f = %.0f\n",a,b,a+b);
	printf("%.0f - %.0f = %.0f\n",a,b,a-b);
	printf("%.0f * %.0f = %.0f\n",a,b,a*b);
	printf("%.0f / %.0f = %f\n",a,b,a/b);
	return 0;
}
