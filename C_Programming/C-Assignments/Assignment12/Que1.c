#include<stdio.h>
#include<string.h>
void main(){
	//Write a program to scan string from user ,
	//then scan a single character and search it in a accepted string.
	char str[50] , ch;
	printf("Enter given string: ");
	scanf("%[^\n]",str);
	
	fflush(stdin);
	printf("\nEnter char to search in string: ");
	scanf("%c",&ch);
	
	char* res=strchr(str,ch);

	if(res!=NULL)
	 	printf("Character found at index: %ld ",res-str);
	else
		printf("Character not found");
}