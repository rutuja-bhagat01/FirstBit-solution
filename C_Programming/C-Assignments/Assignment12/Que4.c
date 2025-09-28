#include<stdio.h>
#include<string.h>
void main(){
	//WAP to Form a New String where the First Character and
	//the Last Character have been Exchanged 
	
	char str[50], tempCh;
	
	printf("Enter given string: ");
	scanf("%[^\n]",str);
	tempCh=str[0];
	int len = strlen(str);
	if(len>0) {
		str[0]=str[len-1];
		str[len-1]= tempCh;
		printf("\nUpdated string: %s",str);
	} else
		printf("\nempty string");
}