#include <stdio.h>
#include <stdlib.h>

int main() {
	int i, vector[5]={18,25,31,27,28};
	for(i=0;i<5;i++) {
		printf("vector[%d]\t%p\t%d\n",i,&vector[i],vector[i]);
	}
	//array names are just pointers to the first element
	printf("\nvector\t\t%p\n", vector);
	
	//dereference it
	printf("\n*vector\t\t%d\n", *vector);
	printf("\n*(vector+2)\t%d\n", *(vector+2));
return 0;
}
