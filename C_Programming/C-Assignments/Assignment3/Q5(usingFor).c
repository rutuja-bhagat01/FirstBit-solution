#include<stdio.h>
void main() {
	//Check the given number is Armstrong number or not..


	int num, orNum, count=0, rem, sum=0, p=1;

	printf("Enter number = ");
	scanf("%d",&num);

	orNum = num;

	//to count total digits
	while(num>0) {
		num=num/10;
		count++;
	}
	printf("Number of digits = %d\n",count);
	num= orNum;

	// to calculate sum of digits raised to power count(n)
	
	while(num>0) {
		rem=num%10;
		p=1;
		//power calculation
		for(int i=0; i<count; i++) {
			p = p*rem;
		}

		sum= sum + p;
		num=num/10;
	}
	printf("Sum = %d\n",sum);
	if(orNum == sum) {
		printf("An armstrong number");
	} else {
		printf("Not armstrong number");
	}

}
