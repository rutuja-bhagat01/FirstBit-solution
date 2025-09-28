#include<stdio.h>
#include <string.h>
void main(){
			
	// 14. strlwr() = converts string to lowercase
	char str[50]= "Hello WORLD!!!";
	
	printf("Before: %s\n",str);
	printf("After: %s",strlwr(str));
	
}