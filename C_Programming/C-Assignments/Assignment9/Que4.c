#include<stdio.h>

void printEven(int *, int);
void printOdd(int *, int);
void main(){
	// Find odd and even among the numbers. 
	int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements in array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Function calls
    printEven(arr, n);
    printOdd(arr, n);
}//main ends here

// Function to print even numbers
void printEven(int *arr, int size) {
    printf("\nEven numbers = ");
    for (int i = 0; i < size; i++) {
        if (*(arr + i) % 2 == 0) {   // pointer arithmetic
            printf("%d ", *(arr + i));
        }
    }
}

// Function to print odd numbers
void printOdd(int *arr, int size) {
    printf("\nOdd numbers = ");
    for (int i = 0; i < size; i++) {
        if (*(arr + i) % 2 != 0) {   // pointer arithmetic
            printf("%d ", *(arr + i));
        }
    }
}