#include<stdio.h>
void main() {
	// Check the given number is Palindrome number or not.
	int num, revNum,i,lastDigit;
	printf("Enter number: ");
	scanf("%d",&num);
	i = num;
	revNum=0;
	while(i>0) {
		lastDigit=i%10;
		revNum =  revNum*10 + lastDigit;
		i = i/10;
			
	}
	
	if(num==revNum) {
		printf("Number is Palindrome number");
	} else {
		printf("Number is not Palindrome number");
	}
}