#include<stdio.h>
void main(){
	//Find factorial of given number.
	int num, fact=1, sum=0;
	
	printf("Enter number ");
	scanf("%d",&num);
	
	for(int i=num; i>0;i--){
		fact = fact*i;
	}
		
	printf("factorial of %d is %d",num,fact);
}