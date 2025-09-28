#include<stdio.h>
#include<string.h>
void main() {
	//WAP to Calculate the Number of Words Present in a String
	char str[100] ;
	int count=0;
	printf("Enter given string: ");
	scanf("%[^\n]",str);

	//initializing tokens
	char *t = strtok(str," ");

	while(t!=NULL) {
		//printf("%s\n",t);
		t = strtok(NULL," ");
		count +=1;
	}
	printf("\nNumber of words = %d",count);
}