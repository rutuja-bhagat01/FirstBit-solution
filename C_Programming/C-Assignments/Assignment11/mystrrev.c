#include<stdio.h>
#include <string.h>
char* mystrrev(char*);
void main(){
			
	// h. mystrrev
	char str[50]= "firstbit-Solution";
	printf("Given string is: %s\n",str);
	
	char* ptr = mystrrev(str);
	printf("Reeversed string is %s",ptr);
}//main ends here

char* mystrrev(char* p){
	int i=0, j=0;
	char temp;
	while(p[i] !='\0')
		i++;
	int lastIndex= i--;
	while(j<i){
		temp= p[j];
		p[j]= p[i];
		p[i]=temp;
		i--;
		j++;
	}	
	return p;
}