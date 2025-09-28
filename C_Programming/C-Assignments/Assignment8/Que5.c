#include<stdio.h>
void main(){
	// Print alternate elements in array.
	int n,sum=0;
	printf("Enter size of array ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter elements in array ");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("\nAlternate elements in array ");
	for(int i=0; i<n; i+=2){
		printf("%d ",arr[i]);
	}
}