#include<stdio.h>
void main(){
	//.Write a C program to input a time in 24-hour format and display it in 12 hour format with AM/PM. 
	
    int h, m;
    printf("Enter time in 24-hour format (HH MM): ");
    scanf("%d %d", &h, &m);

    if (h == 0) {
        h = 12;
        printf("%d:%02d AM\n", h, m);
    }
    else {
        if (h < 12) {
            printf("%d:%02d AM\n", h, m);
        }
        else {
            if (h == 12) {
                printf("%d:%02d PM\n", h, m);
            }
            else {
                printf("%d:%02d PM\n", h - 12, m);
            }
        }
    }
}