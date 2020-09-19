#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main() {
	char a = 'm';
	char cuv[100] = "Hey ";
	char catsName[25];
	char catsFood[25];
	printf("%c\n",toupper(a));
	printf("%c\n",a);
	strcat(cuv,"Monica");
	printf("%s\n",cuv);
	strcpy(cuv,"Monica is awesome!");
	printf("%s\n",cuv);
	puts("What is the cat's name?");
	gets(catsName);
	catsName[0] = toupper(catsName[0]);
	puts("What does it eat?");
	gets(catsFood);
	printf("%s loves to eat %s\n",catsName,catsFood);
return 0;
}
