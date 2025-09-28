#include <stdio.h>
struct Movie {
    char title[50];
    char director[50];
    int year;
    char genre[30];
};

// Function declarations
void addMovie(struct Movie movies[], int *count);
void displayMovies(struct Movie movies[], int count);
void searchMovie(struct Movie movies[], int count);
void updateMovie(struct Movie movies[], int count);

void main() {
	struct Movie movies[20];  // database of movies
    int count = 0, choice;

    while (1) {
        printf("\n--- Movie Database ---\n");
        printf("1. Add Movie\n");
        printf("2. Display All Movies\n");
        printf("3. Search Movie by Title\n");
        printf("4. Update Movie\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            addMovie(movies, &count);
        } else if (choice == 2) {
            displayMovies(movies, count);
        } else if (choice == 3) {
            searchMovie(movies, count);
        } else if (choice == 4) {
            updateMovie(movies, count);
        } else if (choice == 0) {
            printf("Exiting...\n");
            break;
        } else {
            printf("Invalid choice! Try again.\n");
        }
    }
}//main ends here

// Function to add movie
void addMovie(struct Movie movies[], int *count) {
    printf("\nEnter Movie Title: ");
    scanf(" %[^\n]", movies[*count].title);

    printf("Enter Director: ");
    scanf(" %[^\n]", movies[*count].director);

    printf("Enter Release Year: ");
    scanf("%d", &movies[*count].year);

    printf("Enter Genre: ");
    scanf(" %[^\n]", movies[*count].genre);

    (*count)++;
    printf("Movie added successfully!\n");
}

// Function to display all movies
void displayMovies(struct Movie movies[], int count) {
    if (count == 0) {
        printf("\nNo movies in database.\n");
    } else {
        printf("\n--- Movie List ---\n");
        for (int i = 0; i < count; i++) {
            printf("%d) %s | %s | %d | %s\n",
                   i + 1, movies[i].title, movies[i].director,
                   movies[i].year, movies[i].genre);
        }
    }
}

// Function to search movie by title
void searchMovie(struct Movie movies[], int count) {
    char searchTitle[50];
    int found = 0;

    printf("\nEnter title to search: ");
    scanf(" %[^\n]", searchTitle);

    for (int i = 0; i < count; i++) {
        if (strcmp(movies[i].title, searchTitle) == 0) {
            printf("\nMovie Found:\n");
            printf("%s | %s | %d | %s\n",
                   movies[i].title, movies[i].director,
                   movies[i].year, movies[i].genre);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Movie not found!\n");
    }
}

// Function to update movie
void updateMovie(struct Movie movies[], int count) {
    char searchTitle[50];
    int found = 0;

    printf("\nEnter title of movie to update: ");
    scanf(" %[^\n]", searchTitle);

    for (int i = 0; i < count; i++) {
        if (strcmp(movies[i].title, searchTitle) == 0) {
            printf("Enter New Director: ");
            scanf(" %[^\n]", movies[i].director);

            printf("Enter New Release Year: ");
            scanf("%d", &movies[i].year);

            printf("Enter New Genre: ");
            scanf(" %[^\n]", movies[i].genre);

            printf("Movie updated successfully!\n");
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Movie not found!\n");
    }
}