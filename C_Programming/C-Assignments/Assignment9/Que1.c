#include<stdio.h>
int findMax(int *, int);
int findMin(int *, int);
void main() {

	int arr[10];

	printf("Enter array elements: ");
	for (int i = 0; i < 10; i++) {
		scanf("%d", &arr[i]);
	}

	printf("\nArray elements are: ");
	for (int j = 0; j < 10; j++) {
		printf("\narr[%d] = %d", j, arr[j]);
	}

	int max = findMax(arr, 10);
	int min = findMin(arr, 10);

	printf("\n\nMaximum element is %d", max);
	printf("\nMinimum element is %d\n", min);


}//main ends here

int findMax(int *arr, int n) {
	int max = arr[0];
	for (int i = 1; i < n; i++) {
		if (*(arr + i) > max) {
			max = *(arr + i);
		}
	}
	return max;
}

int findMin(int *arr, int n) {
	int min = arr[0];
	for (int i = 1; i < n; i++) {
		if (*(arr + i) < min) {
			min = *(arr + i);
		}
	}
	return min;
}
