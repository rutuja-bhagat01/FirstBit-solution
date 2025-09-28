#include<stdio.h>
void main(){
	//Write a C program to swap two numbers using a temporary third variable.
	int n1 =17, n2= 27, n3;
	printf("numbers before swaping n1=%d and n2=%d\n",n1,n2);
	n3 = (n1+n2);
	printf("numbers after swaping n1=%d and n2=%d",n3-n1,n3-n2);
}