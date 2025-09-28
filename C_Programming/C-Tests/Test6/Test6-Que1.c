#include<stdio.h>
void inputElements(int*, int);
void commonArrayElements(int*, int*, int, int);
void main() {
	// Write a program in C for, to find common elements in two arrays.
	int n1,n2;
	printf("Enter size of first array ");
	scanf("%d",&n1);
	printf("\nEnter size of second array ");
	scanf("%d",&n2);

	int arr[n1], brr[n2];
	printf("\nEnter elements of 1st array ");
	inputElements(arr,n1);
	printf("\nEnter elements of 2nd array ");
	inputElements(brr,n2);

	commonArrayElements(arr,brr,n1,n2);
}//main ends here

//to take input elements of array
void inputElements(int* array, int size) {
	for(int i=0; i<size; i++) {
		scanf("%d",&array[i]);
	}
}

//to find common elements
void commonArrayElements(int* arr, int* brr, int n1, int n2) {
	int found=0;
	printf("\nCommon elements in given arrays are: ");
	for(int i=0; i<n1; i++) {
			if(arr[i]==brr[j]) {
				int repeated=0;
				for(int k=0; k<i; k++) {
					if(arr[k]==arr[i]) {
						repeated=1;
						break;
					}
				}
				if(!repeated) {
					printf("%d ",arr[i]);
					found =1;
					break;
				}
			}
		}
	}
	if(!found) {
		printf("\nNo common elements found...");
	}
}