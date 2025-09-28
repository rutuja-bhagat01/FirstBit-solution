#include<stdio.h>
void main(){
	// Check the given number is Strong number or not.
	
	int num, fact=1, rem, sum=0;
	
	printf("Enter number ");
	scanf("%d",&num);
	
	int temp = num;
	
	while(temp >0){
		
		rem = temp%10;
		
		//to calculate factorial of digit
		int i=1;
		fact=1;
		while(i<= rem){
			fact = fact*i;
			i++;
		}		
	
	sum = sum + fact;
	temp = temp/10;
		
	}
	printf("Sum factorial of each digit of %d is %d\n",num,sum);
	
	if(sum == num){
		printf("Strong number");
	}
	else{
		printf("Not Strong number");
	}
	
}