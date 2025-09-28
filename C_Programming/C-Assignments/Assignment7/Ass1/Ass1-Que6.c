#include<stdio.h>
void uppercaseOrLowercase(char *);
void main() {
	int ch;
	printf("Enter character ");
	scanf("%c",&ch);
	
	uppercaseOrLowercase(&ch);
}//main ends here

void uppercaseOrLowercase(char *ch1){
	fflush(stdin);	//to flush/clean buffer
	
	if(*ch1>='A'&& *ch1<='Z') {
		printf("character is uppercase\n");
	} else if(*ch1>='a' && *ch1<='z') {
		printf("character is lowercase\n");
	} else {
		printf("its not character\n");
	}
	printf("\n");
}
