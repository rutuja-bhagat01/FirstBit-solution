#include<stdio.h>
#include <string.h>
char * mystrcat(char *, char*);
void main() {

	// d. mystrcat

	char str1[30] = "Hello,";
	char str2[]= "World!!!";
	printf("before concatenation\n %s\n %s\n",str1,str2);

char * p=mystrcat(str1,str2);
	printf("after concatenation\n %s\n",p);

}//main ends here

char * mystrcat(char * ptr1, char* ptr2) {
	int i=0, j=0;
	while(ptr1[i] !='\0') {
		i++;
	}

	while(ptr2[j]!='\0') {
		ptr1[i] = ptr2[j];
		i++;
		j++;
	}

	ptr1[i] = '\0';
	return ptr1;
}