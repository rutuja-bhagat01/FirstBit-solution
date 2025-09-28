#include<stdio.h>
int findSum(int *, int);
void main(){
	//Find sum of all numbers.  
	int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements in array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int result = findSum(arr, n);  // passing array as pointer
    printf("\nSum of elements in given array = %d", result);
}//main ends here

// Function to calculate sum using pointer
int findSum(int *arr, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += *(arr + i);   // pointer arithmetic
    }
    return sum;
}