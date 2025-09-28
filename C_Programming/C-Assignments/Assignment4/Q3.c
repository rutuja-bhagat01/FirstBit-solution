#include<stdio.h>
void main() {
	//Print perfect numbers in the given range 1 to n.
	int fNum,lNum, sum=0;

	printf("Enter 1st number ");
	scanf("%d",&fNum);
	printf("Enter last number ");
	scanf("%d",&lNum);

	printf("Perfect numbers between %d and %d are below\n",fNum,lNum);

	for(int a=fNum; a<=lNum; a++) {
		sum=0;

		for(int i=1; i<a; i++) {
			if(a%i ==0)
				sum= sum+i;
		}
		if(sum == a) {
			printf("%d\n",a);
		}
	}


}