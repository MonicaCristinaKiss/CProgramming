#include <stdio.h>
#include <stdlib.h>

int main() {
	float avgProfit;
	int priceOfPumkin=10;
	int sales=59;
	int daysWorked=7;
	avgProfit= ((float)priceOfPumkin * (float)sales)/(float)daysWorked;
	printf("Average daily profit: $%.3f",avgProfit);
return 0;
}
