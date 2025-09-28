#include<stdio.h>
#include<string.h>
typedef struct Date {
	int day;
	int month;
	int year;
} Date;
void main() {
	//Date (date, month, year)
	Date d1,d2;
	d1.day=10;
	d1.month=9;
	d1.year=2000;

	printf("Enter Date 2 details: ");
	scanf("%d",&d2.day);
	scanf("%d",&d2.month);
	scanf("%d",&d2.year);
	printf("\nEntered date details: ");
	printf("\nDate 1= %d-%d-%d",d1.day,d1.month,d1.year);
	printf("\nDate 2= %d-%d-%d",d2.day,d2.month,d2.year);

}