#include <stdio.h>
#include <stdlib.h>

int main() {
	FILE * fPointer;
	fPointer=fopen("rfa.txt","w+");
	fputs("Today is a beautifull day",fPointer);
	fseek(fPointer, 9, SEEK_SET);
	fputs("Thursday",fPointer);
	fseek(fPointer, -8, SEEK_END);
	fputs(", a nice day.",fPointer);
	fclose(fPointer);
return 0;
}
