#include<stdio.h>
void main(){
	//Write a program to check whether a person is eligible to vote (age = 18).
	int age;
	printf("Enter age ");
	scanf("%d",&age);
	
	if(age>=18){
		printf("Eligible to vote");
	}
	else{
		printf("Not eligible to vote");
	}
}