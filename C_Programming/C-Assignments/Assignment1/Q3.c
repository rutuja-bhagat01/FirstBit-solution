#include<stdio.h>
void main(){
	//Write a program to check whether a given year is a leap year.
	int year;
	printf("Enter year: ");
	scanf("%d",&year);
	
	if(year%4 == 0 && year%100!=0 || year%400==0) {
		printf("This is leap year.");
	}	
	else{
		printf("This is not leap year.");
	}
}