#include<stdio.h>
#include<string.h>
void main() {
	//WAP to Count the Number of Vowels in a String
	char str[50];
	int count=0;
	printf("Enter given string: ");
	scanf("%[^\n]",str);

	for(int i=0; str[i]!='\0' ; i++) {
		if(str[i]=='a' || str[i]=='e'|| str[i]=='o'|| str[i]=='i'||str[i]=='u'
		        ||str[i]=='A'||str[i]=='E'||str[i]=='O'||str[i]=='I'||str[i]=='U') {
			count +=1;
		}

	}
	printf("\nNumber of vowels= %d",count);
}