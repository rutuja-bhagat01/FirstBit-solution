#include<stdio.h>
void main(){
	// Check the given number is Perfect number or not.
	
	int num,i=1, sum=0;
	
	printf("Enter number ");
	scanf("%d",&num);
	
	while(i<num){
		if(num%i == 0){
			sum = sum+i;
		}
		i++;
	}
	
	if(sum == num){
		printf("Perfect number\n");
	}
	else{
		printf("Not a perfect number");
	}
	
}