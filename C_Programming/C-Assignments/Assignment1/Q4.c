#include<stdio.h>
void main() {
	//Write a program to check whether a given character is a vowel or consonant.
	char ch= 'A';
	if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z') ) {

		if(ch=='a' || ch=='e'|| ch=='i'||ch=='o'||ch=='u'||
		        ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U') {
			printf("Charcter is Vowel");
		} else {
			printf("Charcter is consonant");
		}
	}
	else if(ch>='0' ){
		printf("its number");
	}
	else{
		printf("special character");
	}
}