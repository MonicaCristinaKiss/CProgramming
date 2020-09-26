#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char prop1[]="Ana are mere.";
	// prop1="Monica are mere."; - eroare, prop1 e pointer
	// prop1[]="Monica are mere."; - eroare
	strcpy(prop1,"Monica are mere.");
	prop1[11]='p';
	printf("prop1\t%s\t%p\n", prop1,prop1);
	printf("prop1[0]\t%c\t%p\n",prop1[0],prop1[0]);
	printf ("p,&prop1[0]\t%p\n",&prop1[0]);
	puts("propozitie1:");
	fgets(prop1, 30, stdin);
	puts(prop1);
	
	char *prop2="Oana are stilou.";
	printf ("\ns,prop2\t\t%s\n",prop2);
	printf ("s,*&prop2\t%s\n",*&prop2);
	printf ("p,&prop2\t%p\n",&prop2);
	printf ("p,prop2\t\t%p\n",prop2);
	printf ("p,&prop2[0]\t%p\n",&prop2[0]);
	
	printf ("c,prop2[0]\t%c\n",prop2[0]);
	printf ("p,prop2[0]\t%p\n",prop2[0]);	
	printf ("c,*prop2\t%c\n",*prop2);
	printf ("p,*prop2\t%p\n",*prop2);

	prop2="Ana are creion.";
	printf ("\ns,prop2\t\t%s\n",prop2);
	printf ("s,*&prop2\t%s\n",*&prop2);
	printf ("p,&prop2\t%p\n",&prop2);
	printf ("p,prop2\t\t%p\n",prop2);
	printf ("p,&prop2[0]\t%p\n",&prop2[0]);

	printf ("c,prop2[0]\t%c\n",prop2[0]);
	printf ("p,prop2[0]\t%p\n",prop2[0]);	
	printf ("c,*prop2\t%c\n",*prop2);
	printf ("p,*prop2\t%p\n",*prop2);
	
return 0;
}
