#include <stdio.h>
#include <stdlib.h>   
void main() {
	// Merge two arrays
	int n1,n2,n3;
	printf("Enter sizes of arrays ");
	scanf("%d",&n1);
	scanf("%d",&n2);
	n3=n1+n2;
	
	int* arr = (int*)malloc(n1*sizeof(int));
	int* brr = (int*)malloc(n2*sizeof(int));
	int* merged = (int*)malloc(n3*sizeof(int));
	printf("Enter elements in array 1 \n");
	for(int i=0; i<n1; i++) {
		scanf("%d",&arr[i]);
	}
	printf("Enter elements in array 2 \n");
	for(int i=0; i<n2; i++) {
		scanf("%d",&brr[i]);
	}
	
	for(int i=0;i<n1;i++){
		merged[i]=arr[i];
	}
	for(int i=0;i<n2;i++){
		merged[n1+i]=brr[i];
	}
	printf("Merged array : \n");
	for(int i=0;i<n1+n2;i++){
		printf("%d ",merged[i]);
	}
}