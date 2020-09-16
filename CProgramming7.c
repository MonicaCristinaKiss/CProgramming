#include <stdio.h>
#include <stdlib.h>

int main() {
	int a = 0;
	float nota = 0,notatotal = 0;
	float nrtest = 0;
	float medie = 0;
	while (a < 5) {
		printf("a=%d\n",a);
		a++;
	}
	printf("Apasa 0 cand ai terminat.");
	do {
		printf("\nNr. Test: %.0f\tMedie: %.3f",nrtest,medie);
		printf("\nIntroduceti nota: ");
		scanf("%f",&nota);
		nrtest++;
		notatotal+=nota;
		medie=notatotal/nrtest;
	}while(nota != 0);
return 0;
}
