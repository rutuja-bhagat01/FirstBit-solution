#include<stdio.h>
void main(){
	//Find sum of all numbers.
	int n,sum=0;
	printf("Enter size of array ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter elements in array ");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(int j=0;j<n;j++){
		sum=sum+arr[j];
	}
	printf("\nSum of elements in given array = %d",sum);
}