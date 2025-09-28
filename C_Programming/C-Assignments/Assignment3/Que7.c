#include<stdio.h>
void main(){
	// Find factorial of given number.
	
	int num, fact=1, sum=0;
	
	printf("Enter number ");
	scanf("%d",&num);
	
	int i = num;
	while(i>0){
		fact = fact*i;
		i--;
	}
	
	printf("factorial of %d is %d",num,fact);
}