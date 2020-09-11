#include <stdio.h>
#include <stdlib.h>
#include "C2.h"

int main() {
	int age, currentYear, birthYear;
	char name[12]="Monica Kiss";
	char food[]="apples";
	currentYear=2020;
	birthYear=1989;
	age=currentYear-birthYear;
	printf("%s is %d\n", name, age);
	printf("The best food is %s.\n",food);
	strcpy(food, "bananas");
	printf("The best food is %s.\n",food);
	printf("My name is %s.\n", MYNAME);
	printf("My age is %d.\n", AGE);
	return 0;
}
