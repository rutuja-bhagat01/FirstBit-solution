#include<stdio.h>
void leapYear(int *);
void main() {
	int year;
	printf("Enter number ");
	scanf("%d",&year);
	
	leapYear(&year);
}//main ends here

void leapYear(int *year){
	if(*year%4 == 0 && *year%100!=0 || *year%400==0) {
		printf("This is leap year.\n");
	} else {
		printf("This is not leap year.\n");
	}
	printf("\n");
}
