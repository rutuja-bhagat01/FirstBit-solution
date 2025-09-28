#include<stdio.h>
void pallindrome(int *);
void main() {
	int num;
	printf("Enter number ");
	scanf("%d",&num);
	
	pallindrome(&num);
}//main ends here

void pallindrome(int *p){
	int rev=0,rem,or;
	or= *p;

	while(or>0) {
		rem =or%10;
		rev = rev*10+rem;

		or=or/10;
	}
	if(rev==*p) {
		printf("number is pallindrome\n");
	} else
		printf("not pallindrome\n");
	printf("\n");
}
