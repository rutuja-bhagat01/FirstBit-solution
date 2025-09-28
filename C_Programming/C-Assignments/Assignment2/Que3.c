#include<stdio.h>
void main(){
	//Write a program to find greatest of three numbers using nested if-else.
	
	int a=21,b=3,c=60;
		
	if(a>b){
		if(a>c){
			printf("a is greater");
		}
		else{
			printf("c is greater");
		}
	}	
	else {
		if(b>c){
			printf("b is greater");
		}
		else{
			printf("c is greater");
		}
	}
}