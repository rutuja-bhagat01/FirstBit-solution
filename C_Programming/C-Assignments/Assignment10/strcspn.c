#include<stdio.h>
#include <string.h>
void main(){
			
	// 19. strcspn() = 
	char str1[] = "abc12345xyz";
	char str2[] = "xyz";
	
	int len = strcspn(str1,str2);
	printf("Length of initial segment: %d",len);
	
}