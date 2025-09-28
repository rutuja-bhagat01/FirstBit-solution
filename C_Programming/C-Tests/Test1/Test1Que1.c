#include<stdio.h>

int main(){
	int hrs, min, sec;
	int totalSeconds;
	
	printf("Enter time in hh.min.sec : \n");
	scanf("%d.%d.%d",&hrs,&min,&sec);
	
	totalSeconds = (hrs*3600)+(min*60)+sec;
	printf("Time in total seconds = %d",totalSeconds);
	
}