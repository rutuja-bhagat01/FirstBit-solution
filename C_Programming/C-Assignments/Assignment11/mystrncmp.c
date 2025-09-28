#include<stdio.h>
#include <string.h>
int mystrncmp(char* , char* , int);
void main(){
			
	// m. mystrncmp
	char str1[]= "Tanujaa";
	char str2[]= "Tanujab";
	int n = 5;
	
	int i = mystrncmp(str1,str2,n);
	if(i==0)
	printf("Equal strings.");
	else if(i<0)
	printf("str2 is greater");
	else
	printf("str1 is greater");
}//main ends here

int mystrncmp(char* p1, char* p2, int n){
	int i =0;
	while(p1[i]==p2[i] && i<n) {
		if(p1[i]=='\0')
			return 0;
		i++;
	}
	return p1[i]-p2[i];
}