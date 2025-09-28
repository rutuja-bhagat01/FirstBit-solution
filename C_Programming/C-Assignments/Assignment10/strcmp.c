#include<stdio.h>
#include <string.h>
void main(){
			
	//6.strcmp() = compares two strigs
	char str1[]= "Tanuja";
	char str2[]= "Tanujaa";
	
	//compare 2 strings ASCII values and prints result
	int res = strcmp(str1,str2);
	if(res==0)
		printf("same strings");
	else
		printf("different strings");
}