#include<stdio.h>
#include <string.h>
void main(){
			
	//4. strcat() = concatenate(join) strings
	char str1[30] = "Hello, ";
	char str2[]= "World!!!";
	printf("before concatenation\n %s\n %s\n",str1,str2);
	
	strcat(str1,str2);
	printf("after concatenation\n %s\n %s\n",str1,str2);
	
}