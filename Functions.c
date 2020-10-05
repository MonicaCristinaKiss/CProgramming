#include <stdio.h>
#include <stdlib.h>

void printSomething(); //prototype
int a=6; //global variable

int main() {
	int b=4; //local variable
	printf("a este %d\n",a);
	printSomething();
return 0;
}

void printSomething() {
	printf("This is a function.\n");
	printf("a este %d\n",a);
	return;
}
