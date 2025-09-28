#include<stdio.h>
#include <string.h>
void main(){
			
	char str1[50], str2[50], str3[50];
	printf("Enter a sentence ");
	
	//using scanf
	scanf("%s",str1); //reads only one word (stops at space)
	
	getchar();
	//2.using gets
	printf("Enter sentence (gets) ");
	gets(str2);		//reads entire line until enter
	
	//3.using fgets
	printf("Enter sentence (fgets) ");
	fgets(str3,sizeof(str3),stdin);
	
	printf("\n   Results   \n");
	printf("scanf : %s\n",str1);
	printf("gets : %s\n",str2);
	printf("fgets : %s\n",str3);

}