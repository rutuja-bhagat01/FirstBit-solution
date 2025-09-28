#include<stdio.h>
#include <math.h>
void main(){
	//Write a C program to find the roots of a quadratic equation (use nested if for discriminant). 
	
    float a, b, c, d, r1, r2;

    printf("Enter a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);

    d = b*b - 4*a*c;   

    if (d >= 0) {
        if (d == 0) {
            r1 = r2 = -b / (2*a);
            printf("Roots are equal: %.2f\n", r1);
        } else {
            r1 = (-b + sqrt(d)) / (2*a);
            r2 = (-b - sqrt(d)) / (2*a);
            printf("Roots are real and different: %.2f , %.2f\n", r1, r2);
        }
    } else {
        printf("Roots are imaginary\n");
    }
}