#include<stdio.h>
//function declaration
void evenNum(int,int);
void oddNum(int , int);
void main() {

	int fNum,lNum;
	printf("Enter range ");
	scanf("%d %d",&fNum,&lNum);
	//call function
	printf("Even: ");
	evenNum(fNum,lNum);
	printf("\nOdd: ");
	oddNum(fNum,lNum);

}//main ends here

//function definations
void evenNum(int fNum,int lNum) {

	for(int a=fNum; a<=lNum; a++) {
		if(a%2==0) {
			printf("%d ",a);
		} 
	}
}

void oddNum(int fNum,int lNum) {

	for(int a=fNum; a<=lNum; a++) {
		if(a%2!=0) {
			printf("%d ",a);
		} 
	}
}