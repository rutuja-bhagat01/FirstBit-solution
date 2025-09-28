#include <stdio.h>
#include <stdlib.h>   

void printAlternate(int *, int);

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

    printAlternate(arr, n);
} // main ends here

void printAlternate(int *arr, int size) {
    printf("\nAlternate elements in array: ");
    for (int i = 0; i < size; i += 2) {
        printf("%d ", *(arr + i));  
    }
}
