#include<stdio.h>
#include <string.h>
char* mystrlower(char*);
void main(){
			
	// g. mystrlower
	char str[50]= "FIRSTBIT-SOLUTION";
	printf("Given string is: %s\n",str);
	
 	char* low = mystrlower(str);
 	printf("String in lowrcase: %s",low);
}//main ends here

char* mystrlower(char* ptr){
	int i=0;
	while(ptr[i] !='\0'){
		if(ptr[i]>='A' && ptr[i]<='Z')
			ptr[i] = ptr[i]+32;		//converts to uppercase
			i++;
	}
	return ptr;
}