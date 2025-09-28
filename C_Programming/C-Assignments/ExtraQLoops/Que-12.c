#include<stdio.h>
void main(){
	//.Print the following pattern: 
	//1 0 1 0 1 
	//0 1 0 1 0 
	//1 0 1 0 1

    int  i, j;

    for (i = 1; i <= 3; i++) {
        for (j = 1; j <= 5; j++) {
            if ((i + j) % 2 == 0)
                printf("1 ");
            else
                printf("0 ");
        }
        printf("\n");
    }
}