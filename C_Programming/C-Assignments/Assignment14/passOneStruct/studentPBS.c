#include<stdio.h>
#include<string.h>
struct Student{
	int rollNo;
	char name[20];
	int marks;
};
struct Student storeStudent();
void displayStudent(struct Student);
void main(){
	//Student (rollNo, name, marks) 
	struct Student s1,s2,s3;
	
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

struct Student storeStudent(){
	struct Student temp;
	scanf("%d",&temp.rollNo);
	scanf("%s",temp.name);
	scanf("%d",&temp.marks);
	return temp;
}

void displayStudent(struct Student std){	
	printf("\nSRoll No. : %d || Name: %s || Marks: %d",std.rollNo,std.name,std.marks);
}