#include<stdio.h>
#include<string.h>
typedef struct Time{
	int hour;
    int min;
    int sec;
}Time;
void main(){
	//Time (hour, min, sec)   
	Time t1 = {10, 30, 45};  

    Time t2;

    printf("Enter time (hh mm ss): ");
    scanf("%d %d %d", &t2.hour, &t2.min, &t2.sec);

    printf("\nTime 1 : %02d:%02d:%02d", t1.hour, t1.min, t1.sec);
    printf("\nTime 2: %02d:%02d:%02d\n", t2.hour, t2.min, t2.sec);
}