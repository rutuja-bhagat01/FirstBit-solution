#include<stdio.h>
void main(){
	//Search the given number in array.  
	int arr[7], isPresent=0;
	printf("Enter array elements ");
	for(int i=0;i<7;i++){
		scanf("%d",&arr[i]);
	}
	
	int num;
	printf("\nEnter number to search in array ");
	scanf("%d",&num);
	for(int i=0;i<7;i++){
		if(num==arr[i]){
			printf("\nNumber is present in array at index %d",i);
			isPresent=1;
			break;
		}
	}
	if(!isPresent){
		printf("\nNumber is absent in the array");
	}
}