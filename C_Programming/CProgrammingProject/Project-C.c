#include<stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct Book {
	int id;
	char name[50];
	char author[50];
	char category[30];
	float price;
	float rating;
} Book;

//function declaration
void addBook(Book*, int*);
void displayAllBooks(Book*, int);
void removeBook(Book*, int*);
void searchBook(Book*, int);
void updateBook(Book*, int);
void showAuthorsBooks(Book*, int);
void showCategoryBooks(Book*, int);
void displaySortedBooks(Book*, int);

void main() {
	//Book Management System
	int capacity = 100;
	Book *books = (Book*) malloc(capacity * sizeof(Book));
	//Book books[100];
	int count = 0;

	int choice;
	for (;;) {
		printf("\n==== Book Management System ====\n");
		printf("1. Add Book\n");
		printf("2. Remove Book\n");
		printf("3. Search Book\n");
		printf("4. Show Author's Books\n");
		printf("5. Show Category's Books\n");
		printf("6. Update Book Data\n");
		printf("7. Display Sorted Books\n");
		printf("8. Display All Books\n");
		printf("0. Exit\n");
		printf("Enter your choice: ");
		scanf("%d", &choice);

		if (choice == 1) {
			printf("\nAdd Book function called...\n");
			if (count >= capacity) {
				capacity *= 2;
				books = realloc(books, capacity * sizeof(Book));
				printf("Capacity increased to %d\n", capacity);
			}
			addBook(books, &count);
		} else if (choice == 2) {
			printf("\nRemove Book function called...\n");
			removeBook(books,&count);
		} else if (choice == 3) {
			printf("\nSearch Book function called...\n");
			searchBook(books,count);
		} else if (choice == 4) {
			printf("\nShow Author's Books function called...\n");
			showAuthorsBooks(books,count);
		} else if (choice == 5) {
			printf("\nShow Category's Books function called...\n");
			showCategoryBooks(books,count);
		} else if (choice == 6) {
			printf("\nUpdate Book Data function called...\n");
			updateBook(books,count);
		} else if (choice == 7) {
			printf("\nDisplay Sorted Books function called...\n");
			displaySortedBooks(books,count);
		} else if (choice == 8) {
			printf("\nDisplay All Books function called...\n");
			displayAllBooks(books,count);
		} else if (choice == 0) {
			printf("\nExiting program...\n");
			break;
		} else {
			printf("\nInvalid choice! Try again.\n");
		}
	}
	free(books);
}//main ends here

//to add new book
void addBook(Book* books,int* count) {
	int n;
	printf("How many books do you want to add? ");
	scanf("%d",&n);
	printf("\nEnter details of books:\n");
	for (int i = 0; i < n; i++) {
		printf("\nBook ID: ");
		scanf("%d", &books[*count].id);
		fflush(stdin);

		printf("Book Name: ");
		scanf(" %[^\n]", books[*count].name);

		printf("Author Name: ");
		scanf(" %[^\n]", books[*count].author);

		printf("Category: ");
		scanf(" %[^\n]", books[*count].category);

		printf("Price: ");
		scanf("%f", &books[*count].price);

		printf("Rating: ");
		scanf("%f", &books[*count].rating);

		(*count)++;
	}
	printf("\n*****Books added successfully!*****\n");
}

//to display all books
void displayAllBooks(Book *books, int count) {
	if (count == 0) {
		printf("\n***** No books available to display! *****\n");
	} else {
		printf("\n***** List of Books *****\n");
		for (int i = 0; i < count; i++) {
			printf("\nBook %d:\n", i + 1);
			printf("ID: %d\n", books[i].id);
			printf("Name: %s\n", books[i].name);
			printf("Author: %s\n", books[i].author);
			printf("Category: %s\n", books[i].category);
			printf("Price: %.2f\n", books[i].price);
			printf("Rating: %.1f\n", books[i].rating);
		}
	}
}

//to remove book
void removeBook(Book *books, int *count) {
	if (*count == 0) {
		printf("\n***** No books available to remove! *****\n");
	} else {
		int id;
		printf("\nEnter Book ID to remove: ");
		scanf("%d", &id);

		int found = 0;

		for (int i = 0; i < *count; i++) {
			if (books[i].id == id) {
				for (int j = i; j < *count - 1; j++) {
					books[j] = books[j + 1];
				}
				(*count)--;
				found = 1;
				break;
			}
		}

		if (found) {
			printf("***** Book with ID %d removed successfully.*****\n", id);
		} else {
			printf("***** Book ID %d not found.*****\n", id);
		}
	}
}

//to search book
void searchBook(Book *books, int count) {
	if (count == 0) {
		printf("\n***** No books available to search! *****\n");
	} else {
		int choice;
		printf("\nSearch by:\n1. Book ID\n2. Book Name\nEnter choice: ");
		scanf("%d", &choice);

		if (choice == 1) {
			int id, found = 0;
			printf("Enter Book ID: ");
			scanf("%d", &id);

			for (int i = 0; i < count; i++) {
				if (books[i].id == id) {
					printf("\n Book Found:\nID: %d\nName: %s\nAuthor: %s\nCategory: %s\nPrice: %.2f\nRating: %.1f\n",
					       books[i].id, books[i].name, books[i].author, books[i].category, books[i].price, books[i].rating);
					found = 1;
					break;
				}
			}
			if (!found) {
				printf("***** Book ID %d not found.*****\n", id);
			}

		} else if (choice == 2) {
			char name[50];
			int found = 0;
			printf("Enter Book Name: ");
			fflush(stdin);
			scanf(" %[^\n]", name);

			for (int i = 0; i < count; i++) {
				if (strstr(books[i].name, name) != NULL) {
					printf("\n Book Found:\nID: %d\nName: %s\nAuthor: %s\nCategory: %s\nPrice: %.2f\nRating: %.1f\n",
					       books[i].id, books[i].name, books[i].author, books[i].category,
					       books[i].price, books[i].rating);
					found = 1;
				}
			}

			if (!found) {
				printf("***** Book '%s' not found.*****\n", name);
			}

		} else {
			printf("***** Invalid choice! *****\n");
		}
	}
}

//to update book details
void updateBook(Book *books, int count) {
	if (count == 0) {
		printf("\n***** No books available to update! *****\n");
	} else {
		int id, found = 0;
		printf("\nEnter Book ID to update: ");
		scanf("%d", &id);

		for (int i = 0; i < count; i++) {
			if (books[i].id == id) {
				printf("Current Price: %.2f | Enter New Price: ", books[i].price);
				scanf("%f", &books[i].price);

				printf("Current Rating: %.1f | Enter New Rating: ", books[i].rating);
				scanf("%f", &books[i].rating);

				printf("***** Book with ID %d updated successfully!*****\n", id);
				found = 1;
				break;
			}
		}

		if (!found) {
			printf("***** Book ID %d not found.*****\n", id);
		}
	}
}

//to show authors books
void showAuthorsBooks(Book *books, int count) {
	if (count == 0) {
		printf("\n***** No books available! *****\n");
	} else {
		char author[50];
		int found = 0;

		printf("\nEnter Author Name: ");
		fflush(stdin);
		scanf(" %[^\n]", author);

		printf("\n Books by Author '%s':\n", author);
		for (int i = 0; i < count; i++) {
			if (strstr(books[i].author, author) != NULL) {
				printf("\nID: %d\nName: %s\nAuthor: %s\nCategory: %s\nPrice: %.2f\nRating: %.1f\n",
				       books[i].id, books[i].name, books[i].author,
				       books[i].category, books[i].price, books[i].rating);
				found = 1;
			}
		}

		if (!found) {
			printf("***** No books found by author '%s'.*****\n", author);
		}
	}
}

//to show category of books
void showCategoryBooks(Book *books, int count) {
	if (count == 0) {
		printf("\n***** No books available! *****\n");
	} else {
		char category[50];
		int found = 0;

		printf("\nEnter Category: ");
		fflush(stdin);
		scanf(" %[^\n]", category);

		printf("\n Books in Category '%s':\n", category);
		for (int i = 0; i < count; i++) {
			if (strstr(books[i].category, category) != NULL) {
				printf("\nID: %d\nName: %s\nAuthor: %s\nCategory: %s\nPrice: %.2f\nRating: %.1f\n",
				       books[i].id, books[i].name, books[i].author,
				       books[i].category, books[i].price, books[i].rating);
				found = 1;
			}
		}

		if (!found) {
			printf("***** No books found in category '%s'.*****\n", category);
		}
	}
}

//to display sorted books
void displaySortedBooks(Book *books, int count) {
	int hasBooks = 1;
	if (count == 0) {
		printf("\n***** No books available! *****\n");
		hasBooks = 0;
	} else {
		int choice;
		int validChoice = 1;
		printf("\nSort by:\n1. Price (High to Low)\n2. Rating (High to Low)\nEnter choice: ");
		scanf("%d", &choice);

		Book sorted[100];
		for (int i = 0; i < count; i++) {
			sorted[i] = books[i];
		}

		for (int i = 0; i < count - 1; i++) {
			for (int j = i + 1; j < count; j++) {
				if (choice == 1 && sorted[i].price < sorted[j].price) {
					Book temp = sorted[i];
					sorted[i] = sorted[j];
					sorted[j] = temp;
				} else if (choice == 2 && sorted[i].rating < sorted[j].rating) {
					Book temp = sorted[i];
					sorted[i] = sorted[j];
					sorted[j] = temp;
				}
			}
		}

		if (choice == 1) {
			printf("\n***** Books Sorted by Price (High to Low):*****\n");
		} else if (choice == 2) {
			printf("\n**** Books Sorted by Rating (High to Low):*****\n");
		} else {
			printf("\n***** Invalid choice! *****\n");
			validChoice = 0;
		}

		if (validChoice) {
			for (int i = 0; i < count; i++) {
				printf("\nID: %d\nName: %s\nAuthor: %s\nCategory: %s\nPrice: %.2f\nRating: %.1f\n",
				       sorted[i].id, sorted[i].name, sorted[i].author,
				       sorted[i].category, sorted[i].price, sorted[i].rating);
			}

			int top;
			if (count < 3) {
				top = count;
			} else {
				top = 3;
			}

			printf("\n***** Top %d Books:*****\n", top);
			for (int i = 0; i < top; i++) {
				printf("%d) %s | Price: %.2f | Rating: %.1f\n",
				       i + 1, sorted[i].name, sorted[i].price, sorted[i].rating);
			}
		}
	}
}




