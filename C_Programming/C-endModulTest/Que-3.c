#include<stdio.h>

typedef struct Product {
	char name[50];
	int id;
	double price;
	double totalPrice;
} Product;

void display(Product *, int);
void main() {
	//Question 3

	int n;
	float discountedPrice =0, totalPriceWithGST;

	printf("Enter number of products ");
	scanf("%d",&n);

	Product p[n];

	for(int i=0; i<n; i++) {
		printf("\nEnter details of product %d:",i+1);

		printf("\nName: ");
		scanf("%s",&p[i].name);
		fflush(stdin);
		printf("ID: ");
		scanf("%d",&p[i].id);

		printf("Price: ");
		scanf("%lf",&p[i].price);

		if(p[i].price>500) {
			p[i].totalPrice = p[i].price -(0.20* p[i].price);
		} else {
			p[i].totalPrice = p[i].price -(0.05* p[i].price);
		}

		discountedPrice = discountedPrice + p[i].totalPrice;

		totalPriceWithGST = discountedPrice - (0.18 *discountedPrice);
	}
	//to display all
	display(p,n);
	printf("\n____________________________________________________________");
	printf("\nTotal Price of all products without GST : %lf",totalPriceWithGST);

}//main ends here

void display(Product * p, int n) {

	for(int i=0; i<n; i++) {
		printf("\n\nProduct Details %d",i+1);
		printf("\nProduct Name: %s",p[i].name);
		printf("\nProduct ID: %d",p[i].id);
		printf("\nOriginal Product Price: %lf",p[i].price);
		printf("\nTotal Product Price with discount: %lf",p[i].totalPrice);
	}
}



