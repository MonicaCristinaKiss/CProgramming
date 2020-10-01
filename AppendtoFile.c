#include <stdio.h>
#include <stdlib.h>

int main() {
	FILE * fPointer;
	fPointer=fopen("readingfiles.txt","a");
	fprintf(fPointer,"\nGoodbye!");
	fclose(fPointer);
return 0;
}
