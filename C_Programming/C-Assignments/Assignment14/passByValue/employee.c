#include<stdio.h>
#include<string.h>
struct Employee {
	int id;
	char name[20];
	double salary;
};
void main() {
	//Employee (id, name, salary)
	struct Employee e1,e2,e3;


	e1.id = 1001;
	strcpy(e1.name,"James");
	e1.salary = 15000;
	
	printf("Enter Employee 2 details: ");
	scanf("%d",&e2.id);
	scanf("%s",e2.name);
	scanf("%lf",&e2.salary);
	
	printf("Enter Employee 3 details: ");
	scanf("%d",&e3.id);
	scanf("%s",e3.name);
	scanf("%lf",&e3.salary);

	printf("\nEmployee details: ");
	printf("\nEmployee 1\n EmpId : %d || Name: %s || Salary: %lf",e1.id,e1.name,e1.salary);
	printf("\nEmployee 2\n EmpId : %d || Name: %s || Salary: %lf",e2.id,e2.name,e2.salary);
	printf("\nEmployee 3\n EmpId : %d || Name: %s || Salary: %lf",e3.id,e3.name,e3.salary);

}