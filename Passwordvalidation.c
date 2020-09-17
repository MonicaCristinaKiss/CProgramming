#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main() {
	int i;
	char password[30];
	bool len = 0, ucl = 0, num = 0, spe = 0;
	printf("Password must contain:\n\t- an upper case letter\n\t- a number\n\t- a special character\nEnter a password:\n");
	
	do {
		scanf(" %s",password);
		if (strlen(password)<3) {
			printf("Password is too short.\nEnter a password:\n");}
		else {
			len = 1;
			ucl = 0;
			num = 0;
			spe = 0;
			for(i=0;i<strlen(password);i++) {
					if (isalpha(password[i])) {
						if (isupper(password[i])) {ucl = 1;}
					}
					else if (isdigit(password[i])) {num = 1;}
					else {spe = 1;}
					if ((ucl&&num)&&spe) {printf("Password is valid. Password set to %s\n",password);
					break;}				
				}
				if (((ucl&&num)&&spe)!=1)
				{printf("Password must contain:\n");
					if (ucl==0) {printf("\t- an upper case letter\n");}
					if (num==0) {printf("\t- a number\n");}
					if (spe==0) {printf("\t- a special character\n");}
					printf("Enter a password:\n");
				}		
		}
			
	}while(((len&&ucl)&&(num&&spe))!=1);
return 0;
}
