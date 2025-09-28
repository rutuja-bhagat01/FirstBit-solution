#include<stdio.h>
void main(){
	// Write a C program to check whether a person is eligible for a loan: 
	// Age ≥ 21 
	// Salary ≥ 25,000 
	int age;
	double sal;
	printf("Enter persons age: ");
	scanf("%d",&age);
	printf("Enter persons salary: ");
	scanf("%lf",&sal);
	if(age>=21 && sal>=25000)
		printf("\nPerson is eligible for a loan.");
	else
		printf("\nPerson is not eligible for a loan.");	
}