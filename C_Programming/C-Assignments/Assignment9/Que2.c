#include<stdio.h>
void searchNumber(int *, int, int);
void main(){
	//Search the given number in array.
	int arr[7], num;
    printf("Enter array elements: ");
    for (int i = 0; i < 7; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nEnter number to search in array: ");
    scanf("%d", &num);

    // function call with pointer
    searchNumber(arr, 7, num);
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