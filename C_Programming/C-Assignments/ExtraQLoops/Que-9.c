#include<stdio.h>
void main(){
	// Write a C program to generate the series: 
	//1, 2, 4, 7, 11, 16, ... n terms 


    int n, i, term = 1, diff = 1;

    printf("Enter how any number of terms to generate: ");
    scanf("%d", &n);

    printf("Series: ");
    for (i = 1; i <= n; i++) {
        printf("%d ", term);
        term = term + diff;  
        diff++;              
    }
}