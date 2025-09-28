#include<stdio.h>
void main(){
	//Write a C program to generate the series: 
	//2, 4, 8, 16, 32, ... n terms

    int n, i, term = 2;

    printf("Enter how any number of terms to generate: ");
    scanf("%d", &n);

    printf("Series: ");
    for (i = 1; i <= n; i++) {
        printf("%d ", term);
        term = term * 2;   // next term
    }

}