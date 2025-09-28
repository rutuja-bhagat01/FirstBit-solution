#include<stdio.h>
void main(){
	// Find Sum of first and last digit of given number.
	int num, firstDigit,lastDigit,sum=0;
	printf("Enter number:");
	scanf("%d",&num);
	lastDigit = num%10;
	printf("Last digit= %d\n",lastDigit);
	
	while(num>=10){
		
		num = num/10;
		//num = num%10;
			
	}
	firstDigit = num;
	printf("First digit= %d\n",firstDigit);
	sum = firstDigit + lastDigit;
	printf("Sum of first and last digit = %d (%d + %d)",sum,firstDigit,lastDigit);
}