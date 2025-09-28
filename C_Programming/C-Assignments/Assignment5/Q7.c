#include<stdio.h>
void main(){
	//Print a Floyd’s triangle pattern, Input: n = 4
	int n=1;
	for(int i=1;i<=5;i++){
		
		for(int j=1;j<=i;j++){
			printf("%d ",n++);

		}
		printf("\n");
	}
}