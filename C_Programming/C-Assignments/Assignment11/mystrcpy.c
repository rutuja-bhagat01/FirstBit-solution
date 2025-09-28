#include<stdio.h>
#include <string.h>
char * mystrcpy(char* , char*);
void main(){
			
	// a. mystrcpy
	char str1[] = "Hello Rutuja";
	char str2[20];
	
	char* p =mystrcpy(str2,str1);	//call function
	printf("copied string: %s",p);
}//main ends here

char * mystrcpy(char* p2, char* p1){
	int i=0;
	while(p1[i] !=0){
		p2[i] = p1[i];
		i++;
	}
	p2[i] ='\0';
	return p2;
}