#include<stdio.h>
#include<string.h>
void main(){
	//Write a program to check the string is palindrome or not.
	char str[50] ;
	int i, j, flag = 1;

    printf("Enter a string: ");
    scanf("%s", str); 

    int len = strlen(str);

    // Check palindrome
    for (i = 0, j = len - 1; i < j; i++, j--) {
        if (str[i] != str[j]) {
            flag = 0;
            break;
        }
    }
    if (flag)
        printf("The string %s is a Palindrome.\n", str);
    else
        printf("The string %s is NOT a Palindrome.\n", str);	
}