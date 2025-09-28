#include<stdio.h>
void main(){
	//Write a program to check whether a given character is uppercase or lowercase.
	char ch ;
	printf("Enter char ");
	scanf("%c",&ch);
	
	if(ch>='A'&&ch<='Z'){
		printf("character is uppercase");
	}
	else if(ch>='a' && ch<='z'){
		printf("character is lowercase");
	}
	else{
		printf("its not character");
	}
}