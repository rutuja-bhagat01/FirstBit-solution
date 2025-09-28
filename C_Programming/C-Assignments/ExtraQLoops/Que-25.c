#include <stdio.h>

void main() {

	int n=5, i, j;

	for (i = 1; i < n; i++) {
		for (j = i; j >= 1; j--) {
			printf("%d", j);
		}
	
		for (j = 2; j <= i; j++) {
			printf("%d", j);
		}
		printf("\n");
	}

}
