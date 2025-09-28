#include<stdio.h>
void vowelOrConsonant(char *);
void main() {
	char ch;
	printf("Enter character ");
	scanf("%c",&ch);
	
	vowelOrConsonant(&ch);
}//main ends here

void vowelOrConsonant(char *ch){
	if((*ch>='a' && *ch<='z') || (*ch>='A' && *ch<='Z') ) {

		if(*ch=='a' || *ch=='e'|| *ch=='i'||*ch=='o'||*ch=='u'||
		        *ch=='A'||*ch=='E'||*ch=='I'||*ch=='O'||*ch=='U') {
			printf("Charcter is Vowel\n");
		} else {
			printf("Charcter is consonant\n");
		}
	} else if(*ch>='0' ) {
		printf("its number\n");
	} else {
		printf("special character\n");
	}
	printf("\n");
}
