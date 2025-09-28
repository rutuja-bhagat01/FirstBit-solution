#include<stdio.h>
#include<string.h>
typedef struct Complex {
    float real;
    float imag;
} Complex;

void main() {
   
    Complex c1 = {3.5, -2.5};  
    
    Complex c2;

    printf("Enter complex number (real imaginary): ");
    scanf("%f %f", &c2.real, &c2.imag);

    
    printf("\nComplex Number 1: %.2f + %.2fi", c1.real, c1.imag);
    printf("\nComplex Number 2: %.2f + %.2fi\n", c2.real, c2.imag);

   
}