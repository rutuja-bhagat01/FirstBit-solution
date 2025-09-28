#include<stdio.h>
void eligibleToVote(int *);
void main() {
	int age;
	printf("Enter age ");
	scanf("%d",&age);
	
	eligibleToVote(&age);
}//main ends here

void eligibleToVote(int *age){
	if(*age>=18) {
		printf("Eligible to vote\n");
	} else {
		printf("Not eligible to vote\n");
	}
	printf("\n");
}
