#include<stdio.h>
void main(){

	int num;
	printf("Enter number ");
	scanf("%d",&num);
	
	if(num>0)
		printf("Positive number");
	else if(num<0)
		printf("Negative number");
	else
		printf("Neutral");
}
