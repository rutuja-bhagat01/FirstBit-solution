#include<stdio.h>

void main(){
	int n1,n2;
	printf("Enter numbers: ");
	scanf("%d\n%d\n",&n1,&n2);
	
	char op;
	scanf("%c",&op);
	printf("Operator(+,-,/,*,%)= %c\n",op);
	
	
	float res;
	
	if(op == '+'){
		res = n1 + n2;
		printf("Addition is = %f",res);
	}
	else if(op == '-'){
		res = n1 - n2;
		printf("Substraction is = %f",res);
	}
	else if(op == '/'){
		res = n1 / n2;
		printf("Division is = %f",res);
	}
	else if(op == '*'){
		res = n1 * n2;
		printf("Multiplication is = %f",res);
	}
	else if(op == '%'){
		res = n1 % n2;
		printf("Modulus is = %f",res);
	}
	else{
		printf("Invalid operator");
	}
}