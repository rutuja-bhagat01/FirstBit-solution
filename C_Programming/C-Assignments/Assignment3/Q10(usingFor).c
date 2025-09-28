#include<stdio.h>
void main(){
	//Find Sum of first and last digit of given number.
	int num,fDigit,lDigit,sum=0;
	printf("Enter number ");
	scanf("%d",&num);
	
	lDigit=num%10;
	printf("Last digit= %d\n",lDigit);
	
	for(int i=num ;i>=10; ){
		i=i/10;
		fDigit=i;
	}
	
	printf("First digit= %d\n",fDigit);
	sum = fDigit + lDigit;
	printf("Sum of first and last digit = %d (%d + %d)",sum,fDigit,lDigit);
}