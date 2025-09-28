#include<stdio.h>
void main(){
	//Calculating total salary based on basic. If basic <=5000 da, ta and hra will be
	//10%,20% and 25% respectively otherwise da, ta and hra will be 15%,25% and 30% respectively.

	float totSal,basic,da=1,ta=1,hra=1;
	printf("Enter basic");
	scanf("%f",&basic);
	fflush(stdin);
	
	if(basic<=5000){
		da = 0.10*basic;
		ta = 0.20*basic;
		hra= 0.25*basic;
		printf("%f %f %f\n",da,ta,hra);
	}
	else{
		da = 0.15*basic;
		ta = 0.25*basic;
		hra= 0.30*basic;
	}
	totSal= basic+ da+ ta+ hra;
	printf("Total salary = %0.2f",totSal);
}