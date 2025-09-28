#include<stdio.h>
#include<string.h>
struct SalesManager{
	int id;
	char name[20];
	double salary;
	double incentive;
	int target;
};
void main(){
	//SalesManager (id, name, salary, incentive, target)  
	struct SalesManager s1,s2;
	
	s1.id = 101;
	strcpy(s1.name,"Rutuja");
	s1.salary = 88000;
	s1.incentive = 1500;
	s1.target = 50;
	
	printf("Enter SalesManager 2 details: ");
	scanf("%d",&s2.id);
	scanf("%s",s2.name);
	scanf("%lf",&s2.salary);
	scanf("%lf",&s2.incentive);
	scanf("%d",&s2.target);
	
	printf("\nSalesManager details: ");
	printf("\nSalesManager 1\n Id : %d || Name: %s || Salary: %lf || Incentive: %lf || Target: %d",s1.id,s1.name,s1.salary,s1.incentive,s1.target);
	printf("\nSalesManager 2\n Id : %d || Name: %s || Salary: %lf || Incentive: %lf || Target: %d",s2.id,s2.name,s2.salary,s2.incentive,s2.target);
	
}