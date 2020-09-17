#include <stdio.h>
#include <stdlib.h>

int main() {
	int i;
	for(i=1;i<=7;i++){
		printf("i este %d\n",i);
	}
	
	int j, coloane, randuri;
	printf("nr. coloane: ");
	scanf(" %d", &coloane);
	printf("nr. randuri: ");
	scanf(" %d", &randuri);
	
	for(i=1;i<=randuri;i++) {
		for(j=1;j<=coloane;j++) {
			printf("%d ",j);
		}
		printf("\n");
	}
	
return 0;
}
