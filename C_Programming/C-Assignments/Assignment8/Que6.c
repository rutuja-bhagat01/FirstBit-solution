#include<stdio.h>
void main() {
	// Accept array and print only prime numbers of array.
	int n;
	printf("Enter size of array ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter elements in array ");
	for(int i=0; i<n; i++) {
		scanf("%d",&arr[i]);
	}
	printf("Prime Numbers are ");
	for(int i=0; i<n; i++) {
		int num= arr[i];
		int f=2,isPrime=1;
		if(num<=1) {
			isPrime=0;
		} else {
			for(f; f<=(num/2); f++) {
				if(num%f==0) {
					isPrime=0;
					break;
				}
			}
		}
		if(isPrime==1)
	printf("%d ",num);
	}
}