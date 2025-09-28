#include<stdio.h>
void main(){
	//Print a pattern of stars in diamond shape, Input: n = 4
	
	for(int i=5; i>=1; i--) {

		for(int j=1; j<=i; j++) {
			printf(" ");
		}
		for(int k=5; k>=i; k--) {
			printf(" *");
		}
		printf("\n");
	}
	
	for(int i=2; i<=5; i++) {

		for(int j=1; j<=i; j++) {
			printf(" ");
		}
		for(int k=5; k>=i; k--) {
			printf(" *");
		}
		printf("\n");
	}
}