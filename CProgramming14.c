#include <stdio.h>
#include <stdlib.h>

int main() {
	int numar=25;
	printf("Adresa\t\t\tNume\tValoare\n");
	printf("%p\t%s\t%d\n",&numar,"numar",numar);
	
	int * pnumar = &numar;
	
	printf("%p\t%s\t%d\n",pnumar,"numar",numar);
	printf("%p\t%s\t%p\n",&pnumar,"pnumar",pnumar);
	
	// dereference a pointer
	printf("\n*pnumar: %d\n",*pnumar);
	*pnumar=18;
	printf("\n*pnumar: %d\n",*pnumar);
	printf("\nnumar: %d\n",numar);
	
	printf("\nAdresa\t\t\tNume\tValoare\n");
	printf("%p\t%s\t%d\n",&numar,"numar",numar);
	printf("%p\t%s\t%d\n",pnumar,"numar",numar);
	printf("%p\t%s\t%p\n",&pnumar,"pnumar",pnumar);
return 0;
}
