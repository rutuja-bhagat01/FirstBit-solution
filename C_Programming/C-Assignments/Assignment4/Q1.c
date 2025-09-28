#include<stdio.h>

void main() {
	
	//Print armstrong numbers in the given range 1 to n. 
	int fNum, lNum, num, count, rem, p, sum;

	printf("Enter 1st number: ");
	scanf("%d", &fNum);
	printf("Enter last number: ");
	scanf("%d", &lNum);

	printf("Armstrong numbers between %d and %d are below:\n", fNum, lNum);

	for(int a = fNum; a <= lNum; a++) {
		num = a;
		count = 0;

		// Count the number of digits
		int temp = num;
		while(temp > 0) {
			count++;
			temp = temp / 10;
		}

		// Calculate sum of digits raised to the power of count
		sum = 0;
		temp = num;
		while(temp > 0) {
			rem = temp % 10;
			p = 1;

			for(int i = 0; i < count; i++) {
				p = p * rem;
			}

			sum = sum + p;
			temp = temp / 10;
		}

		if(sum == num) {
			printf("%d\n", num);
		}
	}
}
