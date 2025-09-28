#include <stdio.h>
#include <stdlib.h>

void printEven(int *, int);
void printOdd(int *, int);

void main() {

	int n;
	printf("Enter size of array: ");
	scanf("%d", &n);

	int *arr = (int *)malloc(n * sizeof(int));

	if (arr == NULL) {
		printf("Memory allocation failed!\n");
		return;
	}

	printf("Enter elements in array: ");
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}


	printEven(arr, n);
	printOdd(arr, n);
} // main ends here

void printEven(int *arr, int size) {
    printf("\nEven numbers = ");
    for (int i = 0; i < size; i++) {
        if (*(arr + i) % 2 == 0) {   
            printf("%d ", *(arr + i));
        }
    }
}

void printOdd(int *arr, int size) {
    printf("\nOdd numbers = ");
    for (int i = 0; i < size; i++) {
        if (*(arr + i) % 2 != 0) {   
            printf("%d ", *(arr + i));
        }
    }
}