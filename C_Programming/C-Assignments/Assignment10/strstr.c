#include<stdio.h>
#include <string.h>
void main(){
			
	// 10.strstr() = find first occ. of a substring in another string
	char str[]= "Hello, World!!!";
	
	//finding 1st occ of 'o'
	char *res = strstr(str,"World");
	if(res!=NULL)
	 	printf("Found");
	else
		printf("not found");
	
}