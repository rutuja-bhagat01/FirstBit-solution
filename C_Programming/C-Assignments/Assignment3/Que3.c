#include<stdio.h>
void main(){
	// Sum of numbers in given range.
	int start= 1,end =5,sum=0;
	
	while(start<=end){
		printf("%d ",start);
		sum= sum+start;
		start++;
		
	}
	printf("\nSum of numbers in range = %d",sum);
}