#include<stdio.h>
#include <string.h>
void main(){
			
	// 16. strxfrm() = converts char in a string from ASCII encoding to encoding of current locale
	char str1[]="Hello World in C Programming Language";
	char str2[20];
	int size;
	
	//transforming string 
	size = strxfrm(str2,str1, sizeof(str2));
	
	printf("Source: %s\n",str1);
	printf("Transformed: %s\n",str2);
	printf("length returned: %lu",size);

}