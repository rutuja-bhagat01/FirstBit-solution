#include <stdio.h>
typedef struct Time {
    int hrs, min, sec;
}Time;

Time addTime(Time,Time);
int convertToSec(Time);
void main() {
	Time t1, t2, sum;

    printf("Enter first time (hrs min sec): ");
    scanf("%d %d %d", &t1.hrs, &t1.min, &t1.sec);

    printf("Enter second time (hrs min sec): ");
    scanf("%d %d %d", &t2.hrs, &t2.min, &t2.sec);
    
    sum = addTime(t1,t2);
    
    printf("\nFirst Time  = %02d:%02d:%02d", t1.hrs, t1.min, t1.sec);
    printf("\nSecond Time = %02d:%02d:%02d", t2.hrs, t2.min, t2.sec);
    printf("\nSum of Times= %02d:%02d:%02d\n", sum.hrs, sum.min, sum.sec);
    
    printf("\nFirst Time in Seconds  = %d", convertToSec(t1));
    printf("\nSecond Time in Seconds = %d", convertToSec(t2));
    printf("\nSum Time in Seconds    = %d\n", convertToSec(sum));
}//main ends here

//to add time
Time addTime(Time t1,Time t2){
	
	Time sum;
	sum.sec = t1.sec+t2.sec;
	sum.min = t1.min+t2.min+sum.sec/60;
	sum.sec = sum.sec%60;
	
	sum.hrs = t1.hrs+t2.hrs+sum.min/60;
	sum.min = sum.min%60;
	
	return sum;
}

//to convert time into seconds
int convertToSec(Time t){
	int totalSeconds = (t.hrs*3600)+(t.min*60)+t.sec;
	return totalSeconds;
}