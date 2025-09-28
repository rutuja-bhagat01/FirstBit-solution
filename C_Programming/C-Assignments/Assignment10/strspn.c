#include<stdio.h>
#include <string.h>
void main(){
			
	// 18. strspn() = count no. of char from the beginning of str1 that are only from str2
	char str1[] = "abcde12345";
	char str2[] = "abcd";
	
	int len = strspn(str1,str2);
	printf("Length of initial segment: %d",len);
	
}