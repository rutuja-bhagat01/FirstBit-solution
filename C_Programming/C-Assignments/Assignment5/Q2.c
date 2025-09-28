#include<stdio.h>
void main(){
	//Print a right-angled triangle pattern, Input: n = 5
	int n=5;
	for(int i=1;i<=n;i++){
		
		for(int j=1;j<=i;j++){
			printf("* ");
		}
		printf("\n");
	}
}