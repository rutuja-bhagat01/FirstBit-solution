#include<stdio.h>
void main() {
	// Find odd and even among the numbers.
	int n,sum=0;
	printf("Enter size of array ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter elements in array ");
	for(int i=0; i<n; i++) {
		scanf("%d",&arr[i]);
	}
	printf("\nEven numbers = ");
	for(int j=0; j<n; j++) {
		if(arr[j]%2==0)
			printf("%d ",arr[j]);
	}
	printf("\nOdd numbers = ");
	for(int j=0; j<n; j++) {
		if(arr[j]%2!=0)
			printf("%d ",arr[j]);
	}
}