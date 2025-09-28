#include<stdio.h>
#include<string.h>
void main() {
	//WAP to Remove the nth Index Character from a Non-Empty String
	char str[50];
	int n;
	printf("Enter given string: ");
	scanf("%[^\n]",str);

//	int len = strlen(str);
//	if(len>0) {
//		str[len-1]='\0';
//		printf("\nUpdated string: %s",str);
//	} else
//		printf("\nempty string");

	printf("Enter index to remove that character: ");
	scanf("%d",&n);
	int len = strlen(str);
	if(len>0) {
		str[n]=' ';
		printf("\nUpdated string: %s",str);
	} else
		printf("\nempty string");
	
}