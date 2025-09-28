#include<stdio.h>
void main(){
	//Accept a number and check if it is divisible by 3, 5, or both.
	
	int num;
	printf("Enter number: ");
	scanf("%d",&num);
	
	if(num%3==0 && num%5==0){
		printf("Divisible by both");
	}
	else if(num%3==0 && num%5!=0){
		printf("Divisible by 3 but not 5");
	}
	else if(num%5==0 && num%3!=0){
		printf("Divisible by 5 but not 3");
	}
	else{
		printf("Divisible by none");
	}
}