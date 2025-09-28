#include<stdio.h>
void main(){
	//Ask the user to enter marks. Then show the result based on rules:
	
	int marks;
	printf("Enter marks: ");
	scanf("%d",&marks);
	
	if(marks>=75 && marks<=100){
		printf("Distinction");
	}
	else if(marks>=65 && marks<75){
			printf("First Class");
	}
	else if(marks>=55 && marks<65){
			printf("Second Class");
	}
	else if(marks>=40 && marks<55){
		printf("Pass");
	}
	else if(marks<40){
		printf("Fail");
	}
	else{
		printf("Invalid");
	}
}