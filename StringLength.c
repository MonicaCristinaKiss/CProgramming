#include <stdio.h>
#include <stdlib.h>

int main() {
	char prop1[20];
	char prop2[]="ana are mere";
	char prop3[20];
//	char prop3[]; - error, array size missing
	char * pprop1 = prop1;
	char * pprop2 = prop2;
	char * pprop3 ="monica are pere";
	puts("prima propozitie [20+10]:");
	fgets(pprop1, 20, stdin);
	puts(pprop1);
	fgets(pprop1, 10, stdin);
	puts(pprop1);
	puts("a doua propozitie [30]:");
	fgets(pprop2, 30, stdin);
	puts(pprop2);
	puts("a treia propozitie [20]:");
/*	fgets(pprop3, 30, stdin);
	puts(pprop3); - error
*/
	fgets(prop3, 20, stdin);
	puts(prop3);
	
return 0;
}
