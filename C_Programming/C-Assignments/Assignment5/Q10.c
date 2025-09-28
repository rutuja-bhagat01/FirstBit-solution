#include<stdio.h>
void main() {
	//Print a hollow square with diagonal pattern, Input: n = 5
	int n=5;
	for(int i=1; i<=n; i++) {
		for(int j=1; j<=n; j++) {
			if(i==1||i==n||j==1||j==n||j==i)
				printf("* ");
			else
				printf("  ");
		}
		printf("\n");
	}
}