#include<stdio.h>
#include<string.h>
void main(){
	//WAP to Take in Two Strings and Display the Larger String without Using Built-in Functions 
	char str1[50] ,str2[50], l1,l2;
	printf("Enter given string: ");
	scanf("%[^\n]",str1);
	
	fflush(stdin);
	printf("Enter given string: ");
	scanf("%[^\n]",str2);
	
	for(int i=0; str1[i]!='\0';i++){
		l1++;
	}
	for(int i=0; str2[i]!='\0';i++){
		l2++;
	}
	
	if(l1>l2)
		printf("\nString 1 is greater");
	else if(l2>l1)
		printf("\nString 2 is greater");
	else
		printf("\nEqual strings");
}