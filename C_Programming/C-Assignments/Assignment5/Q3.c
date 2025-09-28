#include<stdio.h>
void main(){
	//Print an inverted right-angled triangle pattern, Input: n = 5
	int n=5;
	for(int i=1;i<=n;i++){
		
		for(int j=n;j>=i;j--){
			printf("* ");
		}
		printf("\n");
	}


//	for(int i=5;i>=1;i--){
//		
//		for(int j=1;j<=i;j++){
//			printf("*");
//		}
//		for(int k=5;k>=i;k--){
//			printf("#");
//		}
//		printf("\n");
//	}
}