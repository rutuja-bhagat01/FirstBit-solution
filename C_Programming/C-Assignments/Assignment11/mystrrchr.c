#include<stdio.h>
#include <string.h>
char * mystrrchr(char* , char);
void main(){
			
	// l. mystrrchr
	char str[]= "Hello, World!!!";
	char ch = 'o';
	char* p = mystrrchr(str,ch);
	printf("last occurance of given character: %s",p);
}//main ends here

char * mystrrchr(char* p, char ch){
	int i=0;
	while(p[i]!='\0'){
		i++;
	}
	while(i-=1 && i>=0){
		if(p[i]==ch){
			return &p[i];
		}
		i--;
	}
	return NULL;
}