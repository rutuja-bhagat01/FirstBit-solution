#include<stdio.h>
void main(){
	//Sum of numbers in given range.Find sum of numbers from start to end.
	int fNum=1,lNum=5,sum=0;
	
	for(fNum;fNum<=lNum;fNum++){
		sum = sum+fNum;

	}
	printf("Sum of numbers in given range = %d ",sum);
}