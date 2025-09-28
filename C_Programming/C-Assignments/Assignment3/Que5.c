#include<stdio.h>
void main() {
	// Check the given number is Armstrong number or not..
	int num, orNum, count=0, rem, sum=0;

	printf("Enter number = ");
	scanf("%d",&num);

	orNum = num;

		while(num>0) {
		rem=num%10;
	
		sum= sum + (rem*rem*rem);
		num=num/10;
	}
	printf("Sum = %d\n",sum);
	
	if(orNum == sum) {
		printf("An armstrong number");
	} else {
		printf("Not armstrong number");
	}

}