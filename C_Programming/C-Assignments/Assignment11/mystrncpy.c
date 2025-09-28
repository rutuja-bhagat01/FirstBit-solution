#include<stdio.h>
#include <string.h>
char * mystrncpy(char*,char*, int);
void main(){
			
	// e. mystrncpy
	char str1[] = "Hello world";
	char str2[20];
	int n = 9;
	
	char* p = mystrncpy(str2,str1,n);
	printf("Copied string upto index %d is %s",n,p);
}//main ends here

char * mystrncpy(char* p2, char* p1, int n){
	int i=0;
	while(p1[i]!='\0' && i<n){
		p2[i] = p1[i];
		i++;
	}
	p2[i] ='\0';
	return p2;
}