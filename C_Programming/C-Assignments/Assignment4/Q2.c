#include<stdio.h>
void main() {
	//Print prime numbers in the given range 1 to n.

	int fNum, lNum, num,isPrime;

	printf("Enter 1st number: ");
	scanf("%d", &fNum);
	printf("Enter last number: ");
	scanf("%d", &lNum);

	printf("prime numbers between %d and %d are below:\n", fNum, lNum);

	for(int a = fNum; a <= lNum; a++) {

		num=a;
		isPrime=1;
		if(num<=1) {
			isPrime=0;
		} else {
			for(int f =2; f<=(num/2); f++) {
				if(num%f==0) {
					isPrime=0;
					break;
				}
			}
		}
		if(isPrime) {
			printf("%d\n", num);
		}
	}
}