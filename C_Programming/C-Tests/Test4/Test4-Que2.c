#include<stdio.h>
void powerOfNumber(int, int);
void main() {
	//program to find power of any number
	int num,power;
	printf("Enter number ");
	scanf("%d",&num);
	printf("\nEnter power ");
	scanf("%d",&power);
	
	//call function
	powerOfNumber(num,power);
}//main ends here

void powerOfNumber(int no, int p){
	int result=1;
	for(int i=1; i<=p; i++){
		//int temp=no;
		result = result * no;
	}
	printf("result is %d",result);
}

