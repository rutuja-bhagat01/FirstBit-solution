#include<stdio.h>
#include<string.h>
void main(){
	//WAP to Take in a String and Replace Every Blank Space with special symbol. 
	char str[50], ch1;
	printf("Enter given string: ");
	scanf("%[^\n]",str);
	
	fflush(stdin);
	printf("\nEnter char to be replace with space: ");
	scanf("%c",&ch1);
	
	for(int i=0;str[i]!='\0';i++){
		if(str[i] == ' '){
			str[i]= ch1;
		}
	}
	printf("Updated string: %s",str);
	
	
}