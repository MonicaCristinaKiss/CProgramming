#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	int i,dice;
	float numar1 = 7.65783;
	float numar2 = 3.00000;
	printf("floor of %f is %.2f\n",numar1,floor(numar1));
	printf("floor of %f is %.2f\n",numar2,floor(numar2));
	printf("ceil of %f is %.2f\n",numar1,ceil(numar1));
	printf("ceil of %f is %.2f\n",numar2,ceil(numar2));
	printf("the absolute value of %f-%f=%f is %d (an integer)\n",numar1,numar2,numar1-numar2,abs(numar1-numar2));
	printf("the absolute value of %f-%f=%f is %d (an integer)\n",numar2,numar1,numar2-numar1,abs(numar2-numar1));
	printf("%f^%f=%f\n",numar1,numar2,pow(numar1,numar2));
	printf("sqrt(%f)=%f\n",numar2,sqrt(numar2));
	puts("Random dice:");
	for(i=0;i<=20;i++){
		dice = (rand()%6)+1;
		printf("%d  ",dice);
	}
return 0;
}
