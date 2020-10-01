#include <stdio.h>
#include <stdlib.h>

int main() {
	FILE * fPointer;
	fPointer=fopen("writingfiles.txt","w");
	fprintf(fPointer,"I like cheese.\n");
	fclose(fPointer);
return 0;
}
