#include<stdio.h>
#include <string.h>
int mystrlen(char*);
void main(){
			
	// b. mystrlen
	char str1[30] = "Hello, World!!!";
	
	int len = mystrlen(str1);
	printf("Length of given strings is %d",len);
}//main ends here

int mystrlen(char* p){
	int i=0;
	while(p[i] != '\0'){
		i++;
	}
	return i;
}