#include<stdio.h>

void main(){
	//Accept two numbers from user and an operator (+,-,/,*,%) 
	//based on that perform the desired operations.
	
	int n1,n2;
	printf("Enter numbers: ");
	scanf("%d\n%d",&n1,&n2);
	
	char op;
	fflush(stdin);
	
	printf("Operator(+,-,/,*,%%)= ");
	scanf("%c",&op);
	
	float res;
	
	if(op == '+'){
		res = n1 + n2;
		printf("Addition is = %0.2f",res);
	}
	else if(op == '-'){
		res = n1 - n2;
		printf("Substraction is = %0.2f",res);
	}
	else if(op == '/'){
		res = n1 / n2;
		printf("Division is = %0.2f",res);
	}
	else if(op == '*'){
		res = n1 * n2;
		printf("Multiplication is = %0.2f",res);
	}
	else if(op == '%'){
		res = n1 % n2;
		printf("Modulus is = %0.2f",res);
	}
	else{
		printf("Invalid operator");
	}
}