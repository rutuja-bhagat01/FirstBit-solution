#include<stdio.h>
#include <string.h>
void main(){
			
	//7.strncmp() = compares two strigs with first n characters
	char str1[]= "Tanuja";
	char str2[]= "Tanujaa";
	
	//compare 2 strings ASCII values and prints result
	int res = strncmp(str1,str2,4);
	if(res==0)
		printf("same strings");
	else
		printf("different strings");
	
}