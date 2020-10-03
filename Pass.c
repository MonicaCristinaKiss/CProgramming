#include <stdio.h>
#include <stdlib.h>

void passByValue(int i);
void passByAddress(int * i);

int main() {
	int numar=20;
	passByValue(numar);
	printf("Passing by value, numar is now %d\n",numar);
	passByAddress(&numar);
	printf("Passing by address, numar is now %d\n",numar);
return 0;
}

void passByValue(int i) {
	i=25;
	return;
}

void passByAddress(int * i) {
	*i=18;
	return;
}
