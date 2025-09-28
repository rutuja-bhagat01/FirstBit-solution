#include<stdio.h>
void main(){
	// Check the given number is prime or not.
	int num,i=2,isPrime=1;
	printf("Enter number: ");
	scanf("%d",&num);
	
	if(num<=1){
		isPrime=0;
	}
	else{
		while(i<=num/2){
			if(num%i==0){
				isPrime=0;
				break;
			}
			i++;
		}
	}
	if(isPrime==1)
		printf("Prime number");
	else
		printf("Number is not prime");
}