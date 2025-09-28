#include<stdio.h>
#include<string.h>
struct HR{
	int id;
	char name[20];
	double salary;
	double commission;
};
void main(){
	//HR (id, name, salary, commission) 
	struct HR h1,h2;
	
	h1.id=101;
	strcpy(h1.name,"Praveen");
	h1.salary = 25000;
	h1.commission = 3000;
	
	printf("Enter HR 2 details: ");
	scanf("%d",&h2.id);
	scanf("%s",h2.name);
	scanf("%lf",&h2.salary);
	scanf("%lf",&h2.commission);
	
	printf("\nHR details: ");
	printf("\nHR 1\n Id : %d || Name: %s || Salary: %lf || Commission: %lf",h1.id,h1.name,h1.salary,h1.commission);
	printf("\nHR 2\n Id : %d || Name: %s || Salary: %lf || Commission: %lf",h2.id,h2.name,h2.salary,h2.commission);
	
}