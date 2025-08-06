#include<stdio.h>
void main(){

	int units;
	printf("Enter no. of units ");
	scanf("%d",&units);
	
	if(units>=1 && units<=50)
		printf("30 rs/unit");
	else if(units>=51 && units<=150)
		printf("40 rs/unit");
	else if(units>150)
		printf("50 rs/unit");
	else
	printf("Please enter correct units");
}
