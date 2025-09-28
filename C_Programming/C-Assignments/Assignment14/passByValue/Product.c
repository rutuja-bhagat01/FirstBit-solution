#include<stdio.h>
#include<string.h>
struct Product{
	int id;
	char name[20];
	int quantity;
	double price;
};
void main(){
	//Product (id, name, quantity, price)
	struct Product p1,p2;
	p1.id = 11;
	strcpy(p1.name,"DELL");
	p1.quantity=50;
	p1.price=25000;
	
	printf("Enter prodeuct 2 details: ");
	scanf("%d",&p2.id);
	scanf("%s",p2.name);
	scanf("%lf",&p2.quantity);
	scanf("%lf",&p2.price);
	
	printf("\nProduct details: ");
	printf("\nProduct 1\n Id : %d || Name: %s || Quantity: %d || Price: %lf",p1.id,p1.name,p1.quantity,p1.price);
	printf("\nProduct 2\n Id : %d || Name: %s || Quantity: %d || Price: %lf",p2.id,p2.name,p2.quantity,p2.price);

}