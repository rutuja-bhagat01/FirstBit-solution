#include<stdio.h>
void main(){
	// Reverse the given array. 
	int n;
	printf("Enter size of array ");
	scanf("%d",&n);
	int arr[n],rev[n];
	printf("Enter elements in array ");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(int j=n-1;j>=0;j--){
		rev[j]=arr[j];
	}
	printf("\nReversed array is :");
	for(int j=n-1;j>=0;j--){
		printf("%d ",rev[j]);
	}
}