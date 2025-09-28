#include<stdio.h>
void main() {
	//Write a menu driven program to take a number for user and perform operations as follows.
	//Press 1.To check number is even or odd.
	//2.To check number is prime or not.
	//3.To check number is pallindrome or not.
	//4.To check number is positive, negative or zero.
	//5.To reverse a number.
	//6.To find sum of digits.

	int num;
	printf("Enter a number: ");
	scanf("%d", &num);

	int option,i,isPrime,revNum,lastDigit,r1 ;
	int sum = 0;

	printf("Enter option number to perform operation: ");
	scanf("%d",&option);

	if(option==1) {

		if (num % 2 == 0)
			printf("number is Even\n");
		else
			printf("number is Odd\n");
	}

	else if(option==2) {
		i=2,isPrime=1;
		if(num<=1) {
			isPrime=0;
		} else {
			while(i<=num/2) {
				if(num%i==0) {
					isPrime=0;
					break;
				}
				i++;
			}
		}
		if(isPrime==1)
			printf("Prime number");
		else
			printf("Number is not prime");
	}

	else if(option==3) {

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

	else if(option==4) {
	if(num>0){
		printf("%d is positive number",num);
	}
	else if(num<0){
		printf("%d is negative number",num);
	}else
		printf("The number is zero");
	}

	else if(option==5) {

		i = num;
		revNum=0;
		while(i>0) {
			lastDigit=i%10;
			revNum =  revNum*10 + lastDigit;
			i = i/10;
		}
		printf("Reversed number is = %d",revNum);
	}

	else if(option==6) {

		while(num>0) {
			r1 = num%10;
			sum = sum + r1;
			num = num/10;
		}
		printf("Sum of digits of given number is %d",sum);
	}

}