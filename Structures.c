#include <stdio.h>
#include <stdlib.h>
#include "StructuresInfo.h"

int main() {
	struct user moni;
	struct user ana;
	puts("Enter first name of user moni");
	gets(moni.firstName);
	puts("Enter first name of user ana");
	gets(ana.firstName);
	puts("Enter nota1 of user moni");
	scanf(" %f", &moni.nota1);
	puts("Enter nota2 of user moni");
	scanf(" %f", &moni.nota2);
	moni.medie=(moni.nota1+moni.nota2)/2;
	printf("%s are media %.2f",moni.firstName,moni.medie);
return 0;
}
