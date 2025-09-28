#include<stdio.h>
void totalSalary(float *);
void main() {
	float basic;
	printf("Enter basic salary ");
	scanf("%f",&basic);
	
	totalSalary(&basic);
}//main ends here

void totalSalary(float *basic){
	float totSal,da=1,ta=1,hra=1;
		if(*basic<=5000) {
		da = 0.10* *basic;
		ta = 0.20* *basic;
		hra= 0.25* *basic;
		printf("%f da %f ta %f hra\n",da,ta,hra);
	} else {
		da = 0.15* *basic;
		ta = 0.25* *basic;
		hra= 0.30* *basic;
		printf("%f da %f ta %f hra\n",da,ta,hra);
	}
	totSal= *basic+ da+ ta+ hra;
	printf("%f ",totSal);
}
