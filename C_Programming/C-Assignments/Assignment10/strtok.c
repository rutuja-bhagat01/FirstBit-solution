#include<stdio.h>
#include <string.h>
void main(){
			
	// 12. strtok() = used to split a string into tokens based on specified delimiters
	char str[]= "Hello,  World, in, C, Programming!!!";
	
	//initializing tokens
	char *t = strtok(str," ");
	
	while(t!=NULL){
		printf("%s\n",t);
		t = strtok(NULL,", ");
	}
	
}