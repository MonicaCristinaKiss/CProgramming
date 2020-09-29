#include <stdio.h>
#include <stdlib.h>

int main() {
	int * points;
	points = (int *)malloc(5*sizeof(int));
	free(points);
	
	int i, howMany;
	int total=0;
	float average=0.0;
	int * pointsArray;
	
	printf("How many numbers do you want to average?\n");
	scanf(" %d",&howMany);
	pointsArray = (int *)malloc(howMany*sizeof(int));
	printf("Enter numbers\n");
	for(i=0;i<howMany;i++) {
		scanf(" %d",&pointsArray[i]);
		total+=pointsArray[i];
	}
	average =(float)total/(float)howMany;
	printf("Average is %f",average);
return 0;
}
