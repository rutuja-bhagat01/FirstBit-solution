#include<stdio.h>
#include <string.h>
void main(){
			
	// 17. strpbrk() = find occ in str1 of any chaar from str2
	char str1[]= "rutuja";
	char str2[]= "dghj";
	
	char *res= strpbrk(str1,str2);
	if(res!=NULL)
		printf("First Match found at: %s\n",res);
	else
		printf("No match found\n");
	
}