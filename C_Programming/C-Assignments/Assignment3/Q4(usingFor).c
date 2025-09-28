#include<stdio.h>
void main(){
	//Check the given number is prime or not.
	int num,f=2,isPrime=1;
	printf("Enter number ");
	scanf("%d",&num);
	
	if(num<=1){
		isPrime=0;
	}
	else{
		for(f;f<=(num/2);f++){
			if(num%f==0){
				isPrime=0;
				break;
			}
		}
	}
	
	if(isPrime==1)
	printf("prime");
	else
	printf("not prime");
}