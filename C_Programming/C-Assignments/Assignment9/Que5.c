#include<stdio.h>
void printAlternate(int *, int);
void main(){
	// Print alternate elements in array. 
	int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements in array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // function call
    printAlternate(arr, n);
}//main ends here

void printAlternate(int *arr, int size) {
    printf("\nAlternate elements in array: ");
    for (int i = 0; i < size; i += 2) {
        printf("%d ", *(arr + i));  
    }
}