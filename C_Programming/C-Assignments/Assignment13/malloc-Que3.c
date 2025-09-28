#include <stdio.h>
#include <stdlib.h>   

int findSum(int *, int);

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

    int result = findSum(arr, n);  
    printf("\nSum of elements in given array = %d", result);
} // main ends here


int findSum(int *arr, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += *(arr + i);   
    }
    return sum;
}
