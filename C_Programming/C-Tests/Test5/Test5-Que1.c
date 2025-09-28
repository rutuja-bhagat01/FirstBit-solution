#include<stdio.h>
//function declaration
float sellingPrice(float);
void main(){
	//wap to calculate selling price of book
	float cp;
	
	printf("Enter cost price of book ");
	scanf("%f",&cp);
	
	float sp = sellingPrice(cp);		//call function
	printf("Selling price of book is Rs %0.2f ",sp);
}//main ends here

//function defination
float sellingPrice(float cp){
	int dis =0;
	if(cp>=500){
		dis = 10;
	}
	else if(cp>=1000){
		dis=15;
	}
	else
		dis= 5;
	float sp ;
	float disAmt = (dis*cp)/100;
	printf("Discount amount = %0.2f\n",disAmt);
	sp= cp - disAmt;
	
	return sp;
}