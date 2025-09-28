#include<stdio.h>
void main(){
	//.Print the following pattern: 
	//1 
	//2 3 
	//4 5 6 
	//7 8 9 10 
	
	
    int  i, j, num = 1;

    for (i = 1; i < 5; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }

}