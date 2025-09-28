#include<stdio.h>
void main() {
	//Print strong numbers in the given range 1 to n.

	int fNum,lNum, sum=0,fact=1, rem;

	printf("Enter 1st number ");
	scanf("%d",&fNum);
	printf("Enter last number ");
	scanf("%d",&lNum);

	printf("strong numbers between %d and %d are below\n",fNum,lNum);

	for(int a=fNum; a<=lNum; a++) {

		int temp = a;
		sum=0;

		while(temp >0) {
			rem = temp%10;
			fact = 1;

			for(int i=1; i<=rem; i++) {
				fact = fact*i;
			}

			sum = sum + fact;
			temp = temp/10;

		}

		if(sum ==a) {
			printf("%d\n",a);
		}

	}


}