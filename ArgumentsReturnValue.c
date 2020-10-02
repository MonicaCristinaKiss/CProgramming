#include <stdio.h>
#include <stdlib.h>

float convertToEuro(float lei);

int main() {
	float lei1;
	printf("Suma in lei:\n");
	scanf(" %f",&lei1);
	printf("%.2f euro",convertToEuro(lei1));
return 0;
}

float convertToEuro(float lei) {
	float euro=lei/4.87;
	return euro;
}
