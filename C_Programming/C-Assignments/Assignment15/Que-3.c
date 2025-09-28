#include <stdio.h>
#include <string.h>

#define SIZE 10

typedef struct Player {
    char name[50];
    int matches;
    int runs;
    int wickets;
}Player;

void addPlayer(Player *,int);
void displayPlayers(Player *,int);
void main() {
	Player players[10];
    
    printf("Add Players ");
    addPlayer(players,10);
    printf("\nDisplay added Players ");
    displayPlayers(players,10);
    
    maxRuns(players);
    maxWickets(players);
    
}//main ends here

//to add players
void addPlayer(Player *players,int count){
	 for (int i = 0; i < count; i++) {
        printf("\nEnter details of Player %d:\n", i + 1);

        printf("Name: ");
        scanf("%s", players[i].name);

        printf("Matches: ");
        scanf("%d", &players[i].matches);

        printf("Runs: ");
        scanf("%d", &players[i].runs);

        printf("Wickets: ");
        scanf("%d", &players[i].wickets);
    }
}

//to display added players
void displayPlayers(Player *players,int count){
	printf("\n*****All added Players*****\n");
	for (int i = 0; i < count; i++) {
        printf("| Name: %s  |  Matches: %d  | Runs: %d  | Wickets: %d  |\n",
               players[i].name, players[i].matches, players[i].runs, players[i].wickets);
    }
}

//to find player having maximum runs
maxRuns(Player *players){
	int maxRuns = 0;
	for (int i = 1; i < 10; i++) {
        if (players[i].runs > players[maxRuns].runs) {
            maxRuns = i;
        }
    }

    printf("\nPlayer with Maximum Runs: %s (%d runs)\n",
           players[maxRuns].name, players[maxRuns].runs);
}

//to find player having maximum wickets
maxWickets(Player *players){
	int maxWickets = 0;
	for (int i = 1; i < 10; i++) {
        if (players[i].wickets > players[maxWickets].wickets) {
            maxWickets = i;
        }
    }

    printf("\nPlayer with Maximum Wickets: %s (%d wickets)\n",
           players[maxWickets].name, players[maxWickets].wickets);
}
