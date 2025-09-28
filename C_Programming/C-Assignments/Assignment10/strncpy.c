#include<stdio.h>
#include <string.h>
void main(){
			
	//3.strncpy 
	char str1[] = "Hello world";
	char str2[20];
	
	//copies n characters strncpy(str2,str1,n)
	strncpy(str2,str1,9);
	printf("%s",str2);
}