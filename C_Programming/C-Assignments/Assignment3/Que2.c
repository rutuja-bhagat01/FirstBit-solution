#include<stdio.h>
void main(){
	// Print table for given number.
	int n1 = 5, mul = 1, count;

	while(mul<=10){
		count = n1*mul;
		printf("%d\n",count);
		mul++;
	}
	
}