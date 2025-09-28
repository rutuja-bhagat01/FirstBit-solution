#include<stdio.h>
void main(){
	//Check the given number is Perfect number or not.
	int num, sum=0;
	
	printf("Enter number ");
	scanf("%d",&num);
	
	for(int i=1; i<num;i++){
		if(num%i ==0)
		sum= sum+i;
	}
	
	if(sum == num){
		printf("Perfect number\n");
	}
	else{
		printf("Not a perfect number");
	}
}