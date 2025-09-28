#include<stdio.h>
#include<string.h>
typedef struct Admin{
	int id;
	char name[20];
	double salary;
	double allowance;
}Admin;
void main(){
	//Admin (id, name, salary, allowance)  
	Admin a1,a2,a3;
	
	a1.id=101;
	strcpy(a1.name,"Praveen");
	a1.salary = 25000;
	a1.allowance = 3000;
	
	printf("Enter Admin 2 details: ");
	scanf("%d",&a2.id);
	scanf("%s",a2.name);
	scanf("%lf",&a2.salary);
	scanf("%lf",&a2.allowance);
	
	printf("Enter Admin 3 details: ");
	scanf("%d",&a3.id);
	scanf("%s",a3.name);
	scanf("%lf",&a3.salary);
	scanf("%lf",&a3.allowance);
	
	printf("\nAdmin details: ");
	printf("\nAdmin 1\n Id : %d || Name: %s || Salary: %lf || Allowance: %lf",a1.id,a1.name,a1.salary,a1.allowance);
	printf("\nAdmin 2\n Id : %d || Name: %s || Salary: %lf || Allowance: %lf",a2.id,a2.name,a2.salary,a2.allowance);
	printf("\nAdmin 3\n Id : %d || Name: %s || Salary: %lf || Allowance: %lf",a3.id,a3.name,a3.salary,a3.allowance);
}