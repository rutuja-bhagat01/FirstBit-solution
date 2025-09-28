#include<stdio.h>
#include<string.h>
void main(){
	//WAP Replace all Occurrences of ‘a’ with $ in a String 
	char str[50] , ch1, ch2;
	printf("Enter given string: ");
	scanf("%[^\n]",str);
	
	fflush(stdin);
	printf("\nEnter char to be replace in string: ");
	scanf("%c",&ch1);
	
 	fflush(stdin);
	printf("\nEnter char to print: ");
	scanf("%c",&ch2);
	
	for(int i=0;str[i]!='\0';i++){
		if(str[i] ==ch1){
			str[i]=ch2;
		}
	}
	printf("Updated string: %s",str);
}