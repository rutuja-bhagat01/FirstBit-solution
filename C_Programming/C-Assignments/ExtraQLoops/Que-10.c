#include<stdio.h>
void main(){
	//Write a C program to generate the series: 
	//1, 11, 111, 1111, ... n terms 
	
    int n, i, term = 1;

    printf("Enter how any number of terms to generate: ");
    scanf("%d", &n);

    printf("Series: ");
    for (i = 1; i <= n; i++) {
        printf("%d ", term);
        term = term * 10 + 1;   
    }
}