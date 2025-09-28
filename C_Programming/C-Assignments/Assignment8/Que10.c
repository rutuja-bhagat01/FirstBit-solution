#include<stdio.h>
void main() {
	//Sort the array.
	int n;
	printf("Enter size of array ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter elements in array ");
	for(int i=0; i<n; i++) {
		scanf("%d",&arr[i]);
	}
	printf("\nArray sorted by ascending order \n");
	for(int j=0; j<n-1; j++) {
		for(int k=0; k<n-1-j; k++) {
			if(arr[k]>arr[k+1]) {
				int temp= arr[k];
				arr[k]=arr[k+1];
				arr[k+1]=temp;
			}
		}
	}
	for(int i=0; i<n; i++) {
		printf("%d ",arr[i]);
	}
	
	printf("\n\nArray sorted by descending order \n");
	for(int j=0; j<n-1; j++) {
		for(int k=0; k<n-1-j; k++) {
			if(arr[k]<arr[k+1]) {
				int temp= arr[k];
				arr[k]=arr[k+1];
				arr[k+1]=temp;
			}
		}
	}
	for(int i=0; i<n; i++) {
		printf("%d ",arr[i]);
	}
}