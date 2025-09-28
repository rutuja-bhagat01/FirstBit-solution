#include<stdio.h>
#include <string.h>
char * mystrchr(char*, char);
void main(){
			
	// k. mystrchr
	char str[]= "Hello, World!!!";
	char ch = 'o';
	char* p = mystrchr(str,ch);
	printf("1st occurance of given character: %s",p);
}//main ends here

char * mystrchr(char* p, char ch){
	int i=0;
	while(p[i] !='\0'){
		if(p[i]==ch){
			return &p[i];
		}
		i++;
	}
	return NULL;

//	for(i ; p[i]!='\0'; i++){
//		if(p[i]==ch)
//		return &p[i];
//	}
//	return NULL;
}