#include<stdio.h>
#include <string.h>
int mystrcmp(char* , char*);
void main() {

	// c. mystrcmp
	char str1[]= "Tanujaa";
	char str2[]= "Tanujab";

	int l = mystrcmp(str1,str2);	//call fun
	if(l==0)
	printf("Equal strings.");
	else if(l<0)
	printf("str2 is greater");
	else
	printf("str1 is greater");
}//main ends here

int mystrcmp(char* p1, char* p2) {
	int i =0;
	while(p1[i]==p2[i]) {
		if(p1[i]=='\0')
			return 0;
		i++;
	}
	return p1[i]-p2[i];
}