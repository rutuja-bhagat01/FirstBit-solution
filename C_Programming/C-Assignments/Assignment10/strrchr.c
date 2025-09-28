#include<stdio.h>
#include <string.h>
void main(){
			
	// 9.strrchr() = find last occ. of given char, in string
	char str[]= "Hello, World!!!";
	
	//finding 1st occ of 'o'
	char *res = strrchr(str,'o');
	if(res!=NULL)
	 	printf("Character found at: %ld index",res-str);
	else
		printf("Character not found");
	
}