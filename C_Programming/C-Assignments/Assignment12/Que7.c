#include<stdio.h>
#include<string.h>
void main(){
	//WAP to Remove the Characters of Odd Index Values in a String 
	char str[50] , ch1, ch2;
	printf("Enter given string: ");
	scanf("%[^\n]",str);
	
	int i=0;
	for(i=0 ; str[i]!='\0' ;i++){
		if(i%2!=0){
			str[i]=' ';
		}
	}
	printf("Updated string: %s",str);
}