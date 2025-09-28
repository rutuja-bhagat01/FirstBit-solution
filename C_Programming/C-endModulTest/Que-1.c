#include<stdio.h>
void main() {
	//wap to calculate number of vowels,consonants,spaces and digits from a given string
	char str[50];
	int vowels=0, consonants=0, spaces=0, digits=0;

	printf("Enter string ");
	scanf("%[^\n]s",&str);
	printf("%s",str);

	for(int i=0; str[i]!='\0'; i++) {
		char ch = str[i];
		if (ch >= 'A' && ch <= 'Z') {
            ch = ch + 32;   
        }
		if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            vowels++;
        }
		 else if (ch >= '0' && ch <= '9') {
            digits++;
        }
		else if(ch==' ') {
			spaces++;
		} 
		else if (ch >= 'a' && ch <= 'z') {
            consonants++;
        }
	}
	printf("\nNumber of Vowels = %d",vowels);
	printf("\nNumber of consonants = %d",consonants);
	printf("\nNumber of spaces = %d",spaces);
	printf("\nNumber of digits = %d",digits);
}






