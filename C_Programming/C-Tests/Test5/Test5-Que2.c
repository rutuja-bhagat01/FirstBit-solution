#include<stdio.h>
float deposit(float,float);
float withdraw(float,float);
void main(){
	//wap to print balance amount in your bank account
	float bal,amt;
	int choice;
	printf("Enter balance amount= ");
	scanf("%f",&bal);
	printf("Enter your choice: 1.Deposit  2.Withdraw\n ");
	scanf("%d",&choice);
	if(choice==1){
		printf("\nDeposit amount= ");
		scanf("%f",&amt);
		bal = deposit(bal,amt);
	}
	else if(choice==2){
		printf("\nWithdrawal amount= ");
		scanf("%f",&amt);
		bal = withdraw(bal,amt);
	}
	else{
		printf("\nPlease enter valid choice...");
	}
	
	printf("\nUpdated balance = %0.2f",bal);
}//main ends here

float deposit(float bal,float amt){
	bal = bal+amt;
	return bal;
}

float withdraw(float bal,float amt){
	if(bal<3000){
		printf("\nCan't withdraw the amount, balance is not sufficient.");
	}
	else if(amt>bal){
		printf("\nCan't withdraw the amount, amount exceeds.");
	}
	else{
		bal = bal-amt;
	}
	return bal;
}