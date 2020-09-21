#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	int s1 = 0, s2 = 0, computer;
	char a;
	do {puts("Choose: rock (r) paper (p) scissors (s)");
		do {scanf(" %c",&a);
		}while((a!='r')&&(a!='s')&&(a!='p'));
		computer = rand()%3;
		switch (a) {
			case 'r': if(computer==0) {
				puts("rock - rock");
				s1++;
				s2++;
			}else if(computer==1) {
				puts("rock - scissors");
				s1++;
			}else {
				puts("rock - paper");
				s2++;
			}
			break;
			case 's': if(computer==0) {
				puts("scissors - rock");
				s2++;
			}else if(computer==1) {
				puts("scissors - scissors");
				s1++;
				s2++;
			}else {
				puts("scissors - paper");
				s1++;
			}
			break;
			case 'p': if(computer==0) {
				puts("paper - rock");
				s1++;
			}else if(computer==1) {
				puts("paper - scissors");
				s2++;
			}else {
				puts("paper - paper");
				s1++;
				s2++;
			}
			break;
		}
		printf("Score: player %d - computer %d\n",s1,s2);
	}while((s1<10)&&(s2<10));
return 0;
}
