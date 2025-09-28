#include<stdio.h>
#include<string.h>
typedef struct Distance{
	double feet;
	double inch;
}Distance;
void main(){
	//Distance ( feet, inch) 
	Distance d1,d2;
	
	d1.feet=5;
	d1.inch=3;
	
	printf("Enter Distance 2 details: ");
	scanf("%lf",&d2.feet);
	scanf("%lf",&d2.inch);
	
	printf("\nEntered Distance details: ");
	printf("\nFeet= %lf  || Inch= %lf ",d1.feet,d1.inch);
	printf("\nFeet= %lf  || Inch= %lf ",d2.feet,d2.inch);
}