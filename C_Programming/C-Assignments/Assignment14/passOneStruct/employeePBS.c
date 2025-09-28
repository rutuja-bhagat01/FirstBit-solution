#include<stdio.h>
#include<string.h>
typedef struct Employee{
	int rollNo;
	char name[20];
	int marks;
}Employee;
struct Employee storeEmployee();
void displayEmployee(struct Employee);
void main(){
	//Employee (id, name, salary) 
	Employee s1,s2,s3;
	
	printf("Enter student 1 details: ");
	s1=storeStudent();
	printf("\nEnter student 2 details: ");
	s2=storeStudent();
	printf("\nEnter student 3 details: ");
	s3=storeStudent();
	
	printf("\nEntered Student details: \n");
	displayStudent(s1);
	displayStudent(s2);	
	displayStudent(s3);
}

struct Employee storeEmployee(){
	Employee temp;
	scanf("%d",&temp.rollNo);
	scanf("%s",temp.name);
	scanf("%d",&temp.marks);
	return temp;
}

void displayEmployee(struct Employee emp){	
	printf("\nSRoll No. : %d || Name: %s || Marks: %d",std.rollNo,std.name,std.marks);
}