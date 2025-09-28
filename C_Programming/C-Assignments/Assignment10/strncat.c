#include<stdio.h>
#include <string.h>
void main(){
			
	//5.strncat
	char str1[30] = "Hello, ";
	char str2[]= "World!!!";
	printf("before concatenation\n %s\n",str1);
	
	strncat(str1,str2,4);
	printf("after concatenation\n %s\n",str1);
	
}