#include<stdio.h>
void evenOdd(int*);
void main() {
	int num;
	printf("Enter number ");
	scanf("%d",&num);
	evenOdd(&num);
}//main ends here

void evenOdd(int *p){
	//printf("%d",*p);
	if(*p%2==0) {
		printf("Even\n");
	} else{
		printf("Odd\n");
	}
		
}
