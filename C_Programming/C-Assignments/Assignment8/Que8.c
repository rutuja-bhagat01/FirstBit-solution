#include<stdio.h>
void main(){
	// Merge two arrays 
	int n1,n2;
	printf("Enter size of arrays ");
	scanf("%d %d",&n1,&n2);
	int arr1[n1] , arr2[n2], merged[n1+n2];
	printf("Enter elements in array 1 \n");
	for(int i=0; i<n1; i++) {
		scanf("%d",&arr1[i]);
	}
	printf("Enter elements in array 2 \n");
	for(int i=0; i<n2; i++) {
		scanf("%d",&arr2[i]);
	}
	
	for(int i=0;i<n1;i++){
		merged[i]=arr1[i];
	}
	for(int i=0;i<n2;i++){
		merged[n1+i]=arr2[i];
	}
	printf("Merged array : \n");
	for(int i=0;i<n1+n2;i++){
		printf("%d ",merged[i]);
	}
}