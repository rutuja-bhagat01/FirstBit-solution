#include<stdio.h>
void inputElements(int*, int);
void maxNum(int*, int);
void main() {
	//Write a program in C to find two maximum number in array
	int n;
	printf("Enter size of array ");
	scanf("%d",&n);
	int arr[n];
	printf("\nEnter elements of array ");
	inputElements(arr,n);

	maxNum(arr,n);
}//main ends here

void inputElements(int* array, int size) {
	for(int i=0; i<size; i++) {
		scanf("%d",&array[i]);
	}
}

//to find 2 maximum numbers
void maxNum(int* arr, int n) {
	int max1,max2;
	max1 = arr[0];
	max2 = arr[1];

	if(max1<max2) {
		int temp = max1;
		max1= max2;
		max2= temp;
	}
	for(int i=2; i<n; i++) {
		if(arr[i]>max1) {
			max2=max1;
			max1=arr[i];
		} else if(arr[i] > max2 && arr[i] !=max1) {
			max2=arr[i];
		}
	}
	printf("First Maximum = %d\n", max1);
	printf("Second Maximum = %d\n", max2);
}