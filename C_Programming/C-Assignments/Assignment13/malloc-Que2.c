#include <stdio.h>
#include <stdlib.h>   
void searchNumber(int *, int, int);

void main() {
    int n, num;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return;
    }

    printf("Enter array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nEnter number to search in array: ");
    scanf("%d", &num);
    
    searchNumber(arr, n, num);
}

void searchNumber(int *arr, int size, int num) {
    int isPresent = 0;
    for (int i = 0; i < size; i++) {
        if (*(arr + i) == num) {
            printf("\nNumber is present in array at index %d", i);
            isPresent = 1;
            break;
        }
    }
    if (!isPresent) {
        printf("\nNumber is absent in the array");
    }
}
