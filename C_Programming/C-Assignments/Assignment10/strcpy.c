#include<stdio.h>
#include <string.h>
void main(){
			
	//2.strcpy() = copies string
	char str1[] = "Hello";
	char str2[20];
	
	//copies all characters
	strcpy(str2,str1);
	printf("%s",str2);
}