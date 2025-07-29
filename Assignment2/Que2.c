#include<stdio.h>
void main(){
	int s1,s2,s3;
	printf("Enter sides:");
	scanf("%d,%d,%d",&s1,&s2,&s3);
	//printf("%d%d%d",s1,s2,s3);

	if(s1+s2>s3 && s1+s3>s2 && s2+s3>s1){
		if(s1==s2 && s2==s3){
			printf("Equilateral triangle");
		}
		else if(s1==s2 || s1==s3|| s2==s3){
			printf("Isosceles triangle");
		}
		else{
			printf("scalene triangle");
		}
	}
	else{
		printf("Invalid sides");
	}

}