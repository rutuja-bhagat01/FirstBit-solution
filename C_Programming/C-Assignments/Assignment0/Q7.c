#include<stdio.h>
void main(){
	//Write a C program to convert given minutes into hours and remaining minutes.
	int totalMin= 181;
	int hrs = totalMin/60;
	printf("Total minutes= %d,\nHours= %d,\nRemaining minutes=%d",totalMin,hrs,totalMin%60);
}