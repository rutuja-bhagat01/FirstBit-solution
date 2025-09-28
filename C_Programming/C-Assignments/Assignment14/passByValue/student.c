#include<stdio.h>
#include<string.h>
struct Student{
	int rollNo;
	char name[20];
	int marks;
};
void main(){
	//Student (rollNo, name, marks) 
	struct Student s1,s2;
	
	s1.rollNo = 101;
	strcpy(s1.name,"Rutuja");
	s1.marks = 88;
	
	printf("Enter student details: ");
	scanf("%d %s %d",&s2.rollNo,s2.name,&s2.marks);
//	scanf("%s",s2.name);
//	scanf("%d",&s2.marks);
	
	printf("Student details: \n");
	printf("Student 1\n Roll No. : %d || Name: %s || Marks: %d",s1.rollNo,s1.name,s1.marks);
	printf("\nStudent 2\n Roll No. : %d || Name: %s || Marks: %d",s2.rollNo,s2.name,s2.marks);	
}