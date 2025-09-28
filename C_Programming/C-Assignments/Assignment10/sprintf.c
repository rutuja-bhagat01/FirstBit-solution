#include<stdio.h>
#include <string.h>
void main(){
			
	//11. sprintf() =used to format string and store it in a buffer
	char str[50];
	int n=10;
	
	sprintf(str,"The value is %d",n);
	printf("%s",str);
	
}