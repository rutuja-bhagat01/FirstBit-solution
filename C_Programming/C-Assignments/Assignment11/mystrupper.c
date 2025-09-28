#include<stdio.h>
#include <string.h>
char* mystrupper(char*);
void main(){
			
	// f. mystrupper
	char str[50]= "firstbit-Solution";
	printf("Given string is: %s\n",str);
	
 	char* up = mystrupper(str);
 	printf("String in uppercase: %s",up);
}//main ends here

char* mystrupper(char* ptr){
	int i=0;
	while(ptr[i] !='\0'){
		if(ptr[i]>='a' && ptr[i]<='z')
			ptr[i] = ptr[i]-32;		//converts to uppercase
			i++;
	}
	return ptr;
}