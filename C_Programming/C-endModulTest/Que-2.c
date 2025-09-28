#include<stdio.h>
int reverseNum(int);
void main() {
	//wap toreverse given number of any digit using recursive function
	int num, reversed;

	printf("Enter a number ");
	scanf("%d",&num);

	reversed= reverseNum(num);
	printf("\nReversed number is: %d",reversed);
}//main ends here

int reverseNum(int num) {
	int reversed = 0, rem;
    while (num != 0) {
        rem = num % 10;             
        reversed = reversed * 10 + rem;  
        num = num / 10;             
    }
    return reversed;
}