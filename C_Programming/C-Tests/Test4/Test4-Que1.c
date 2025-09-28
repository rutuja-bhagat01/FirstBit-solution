#include<stdio.h>
void factors(int,int);
void main() {
	//wap to print factors of numbers in given range
	int fNum,lNum;
	printf("Enter range ");
	scanf("%d %d",&fNum,&lNum);
	
	factors(fNum,lNum);
	
}//main ends here

void factors(int fNum,int lNum){
	
	for(int i=fNum; i<=lNum; i++){
		printf("Factors of %d = ",i);
		int fact = 1;
		while(fact<=i){
			if(i%fact==0){
				printf("%d  ",fact);
			}
			fact++;
		}
	printf("\n");
	}
}
