#include<stdio.h>
void main(){
	// Check the given number is Strong number or not.
	
	int num, fact=1, rem, sum=0;
	
	printf("Enter number ");
	scanf("%d",&num);
	
	int temp = num;
	while(temp >0){
		fact = 1;
		rem = temp%10;
		
		for(int i=1; i<=rem;i++){
			fact = fact*i;
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