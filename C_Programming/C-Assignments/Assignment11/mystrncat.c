#include<stdio.h>
#include <string.h>
char* mystrncat(char* , char*, int);
void main(){
			
	// o. mystrncat
	char str1[30] = "Hello,";
	char str2[]= "World!!!";
	printf("before concatenation\n %s\n %s\n",str1,str2);
	int n = 4;
	
	char* p = mystrncat(str1,str2,n);
	printf("String after concatenation : %s",p);
}//main ends here

char* mystrncat(char* ptr1, char* ptr2, int n){
	int i=0, j=0;
	while(ptr1[i] !='\0') {
		i++;
	}

	while(ptr2[j]!='\0' && j<n) {
		ptr1[i] = ptr2[j];
		i++;
		j++;
	}

	ptr1[i] = '\0';
	return ptr1;
}