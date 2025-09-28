#include<stdio.h>
void main(){
	//Find minimum and maximum number in array. 
	int arr[10];
	printf("Enter array elements ");
	
	for(int i=0; i<10; i++){
		scanf("%d",&arr[i]);
	}
	for(int j=0; j<10;j++){
		printf("\narr[%d] = %d",j,arr[j]);
	}
	
	int max=arr[0];
	for(int k=1;k<10;k++){
		if(arr[k]>max){
			max=arr[k];
		}
	}
	printf("\nMaximum element is %d\n",max);
	
	int min=arr[0];
	for(int k=1;k<10;k++){
		if(arr[k]<min){
			min=arr[k];
		}
	}
	printf("\nMinimum element is %d\n",min);
}