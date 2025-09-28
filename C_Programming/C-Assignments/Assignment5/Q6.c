#include<stdio.h>
void main(){
	//Print a half pyramid using numbers, Input: n = 5
	int n=5;
	for(int i=1;i<=n;i++){
		
		for(int j=1;j<=i;j++){
			printf("%d ",j);

		}
		printf("\n");
	}
}