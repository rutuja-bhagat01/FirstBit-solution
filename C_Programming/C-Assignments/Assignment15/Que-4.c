#include <stdio.h>
struct Product {
    char name[50];
    float price;
    int quantity;
};
void main() {
	struct Product cart[10];  
    int n, i;
    float total = 0;

    printf("How many products do you want to add to cart? ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEnter details of Product %d:\n", i + 1);

        printf("Name: ");
        scanf("%s", cart[i].name);

        printf("Price: ");
        scanf("%f", &cart[i].price);

        printf("Quantity: ");
        scanf("%d", &cart[i].quantity);

        total += cart[i].price * cart[i].quantity;
    }

    printf("\n--- Cart Details ---\n");
    for (i = 0; i < n; i++) {
        printf("%s - Price: %.2f, Qty: %d, Subtotal: %.2f\n",
               cart[i].name, cart[i].price, cart[i].quantity,
               cart[i].price * cart[i].quantity);
    }

    printf("\nTotal Bill = %.2f\n", total);
}//main ends here