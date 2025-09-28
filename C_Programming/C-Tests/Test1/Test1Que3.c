#include<stdio.h>

int main(){
	int num, last2digits;
	printf("Please enter the number: ");
	scanf("%d",&num);
	
	last2digits = num % 100;
	printf("Last two digits of number are : %d",last2digits);
	
}