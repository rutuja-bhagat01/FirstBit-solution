#include <stdio.h>

void main() {
    int i, j, num = 1;
    char ch = 'A';

    for (i = 1; i <= 4; i++) {
        for (j = 1; j <= 4; j++) {
            if (i % 2 == 1) {
                printf("%d ", num);
                num++;
            } else {
                printf("%c ", ch);
                ch++;
            }
        }
        printf("\n");
    }
}

