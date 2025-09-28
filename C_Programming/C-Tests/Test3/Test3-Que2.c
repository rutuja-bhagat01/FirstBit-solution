#include<stdio.h>
void main(){
	//to add alternate numbers from ginen range
	int fNum,lNum,sum=0;
	
	printf("Enter first and last number ");
	scanf("%d %d",&fNum,&lNum);
	
	for(int a=fNum; a<=lNum; a=a+2){
		sum = sum+a;
	}
	printf("\nSum of alternate numbers = %d",sum);
}

