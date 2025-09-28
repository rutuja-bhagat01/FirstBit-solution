#include<stdio.h>
void main(){
	//Write a program to check given 3 digit number is pallindrome or not.
	int num = 717,rev=0,rem,or;
	or=num;
	while(num>0){
		rem =num%10;
		rev = rev*10+rem;
		
		num=num/10;
	}
	if(rev==or){
		printf("number is pallindrome\n");
	}
	else
	printf("not pallindrome\n");
}