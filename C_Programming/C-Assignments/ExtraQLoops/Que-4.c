#include<stdio.h>
void main(){
	// Write a C program to classify a character as vowel / consonant / digit / special symbol. 
	
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        // it's an alphabet
        if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
            ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U') {
            printf("Vowel\n");
        } else {
            printf("Consonant\n");
        }
    }
    else {
        if (ch >= '0' && ch <= '9') {
            printf("Digit\n");
        } else {
            printf("Special Symbol\n");
        }
    }
}