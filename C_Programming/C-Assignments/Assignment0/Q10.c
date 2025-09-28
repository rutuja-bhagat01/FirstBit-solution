#include<stdio.h>
void main(){
	//Write a C program to input marks of five subjects,
	// find the total marks, and calculate the percentage.
	
	int s1 = 97, s2=79, s3=89, s4=82,s5=91, totalMarks;
	totalMarks = s1+s2+s3+s4+s5;
	
	float per = (totalMarks/500.0f)*(100.0f);
	printf("Total marks = %d and percentage = %0.2f ",totalMarks,per);
}