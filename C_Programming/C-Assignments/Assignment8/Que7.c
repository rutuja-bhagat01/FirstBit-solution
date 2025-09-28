#include<stdio.h>
void main(){
	//Take two array and add sum in third array 
	int n;
	printf("Enter size of arrays ");
	scanf("%d",&n);
	int arr1[n] , arr2[n], sum[n];
	printf("Enter elements in array 1 \n");
	for(int i=0; i<n; i++) {
		scanf("%d",&arr1[i]);
	}
	printf("Enter elements in array 2 \n");
	for(int i=0; i<n; i++) {
		scanf("%d",&arr2[i]);
	}
	for(int j=0; j<n; j++){
		sum[j] = arr1[j]+arr2[j]; 
		printf("%d ",sum[j]);
	}
	
}