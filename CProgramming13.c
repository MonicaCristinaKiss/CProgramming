#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	int i, temp, sortat;
	int vector[20];
	printf("lista originala:\n");
	for(i=0;i<20;i++){
		vector[i] = (rand()%31)+1;
		printf("%d  ",vector[i]);
	}
	while(1) {
		sortat=0;
		for(i=0;i<20-1;i++) {
			if(vector[i]>vector[i+1]){
				temp=vector[i];
				vector[i]=vector[i+1];
				vector[i+1]=temp;
				sortat=1;
			}
		}
		if(sortat==0) {
			break;
		}
	}
	printf("\nlista ordonata:\n");
	for(i=0;i<20;i++){
		printf("%d  ",vector[i]);
	}
return 0;
}
