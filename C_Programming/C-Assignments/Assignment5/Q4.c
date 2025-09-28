#include<stdio.h>
void main() {
	//pyramid pattern, Input: n = 5
	for(int i=5; i>=1; i--) {

		for(int j=1; j<=i; j++) {
			printf(" ");
		}
		for(int k=5; k>=i; k--) {
			printf(" *");
		}
		printf("\n");
	}
}