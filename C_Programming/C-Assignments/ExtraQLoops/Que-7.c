#include<stdio.h>
void main(){
	//Write a C program to generate the series: 
	//1, 4, 9, 16, 25, ... n terms 
	
    int n, i;
    printf("Enter how any number of terms to generate: ");
    scanf("%d", &n);

    printf("Series: ");
    for (i = 1; i <= n; i++) {
        printf("%d ", i * i);
    }
}