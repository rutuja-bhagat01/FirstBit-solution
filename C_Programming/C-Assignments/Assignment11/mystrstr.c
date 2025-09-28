#include<stdio.h>
#include <string.h>
char * mystrstr(char*, char* );
void main(){
			
	// i. mystrstr
	char str[]= "Hello, World!!!";
	char substr[]="World";
	
	char * p= mystrstr(str,substr);
	printf("substring: %s",p);
}//main ends here

char * mystrstr(char* str1, char* str2){
	int i=0,j=0;
	while(str1[i]!='\0'){
		
		while(str2[j]!='\0' && str1[i+j]==str2[j]){
			j++;
		}
		if(str2[j]=='\0'){
			return &str1[i];
		}
		i++;
	}
	return NULL;
}