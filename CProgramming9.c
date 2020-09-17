#include <stdio.h>
#include <stdlib.h>

int main() {
	int a,howMany,maxAmount=10;
	printf("How many times do you want this loop to loop? (up to 10)\n");
	scanf(" %d", &howMany);
	for(a=1;a<=maxAmount;a++) {
		printf("loop %d\n",a);
		if(a==howMany) {
			break;
		}
	}
a=1;
	printf("What loop do you want to skip? (up to 10)\n");
	scanf(" %d", &howMany);
	switch(howMany){
		case 1: printf("first\n");
				break;
		case 2: printf("second\n");
				break;
		case 3: printf("third\n");
				break;
		case 4: printf("fourth\n");
				break;
		case 5: printf("fifth\n");
				break;
		case 6: printf("sixth\n");
				break;
		case 7: printf("seventh\n");
				break;
		case 8: printf("eighth\n");
				break;
		case 9: printf("ninth\n");
				break;
		case 10: printf("tenth\n");
				break;
		default: printf("no skipping\n");
	}
	do {
		if(a==howMany){
			a++;
			continue;
		}
		printf("%d loop\n",a);
		a++;
	}while(a<=10);	
return 0;
}
