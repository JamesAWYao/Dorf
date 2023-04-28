#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct tile {
    short sideA;
    short sideB;
    short sideC;
    short sideD;
    short sideE;
    short sideF;
    short middle;

    struct tile *tileA;
    struct tile *tileB;
    struct tile *tileC;
    struct tile *tileD;
    struct tile *tileE;
    struct tile *tileF;
};

struct list_node {
    struct list_node *previous;
    struct list_node *next;
    struct tile *value;
};

void toLower(char string[]) {
    for (int i = 0; i < strlen(string); i++){
        short c = string[i];
        if (c > 64 && c < 91) {
            c = c + 32;
            string[i] = c;
        };
    }
}

int main(void) {
    char userInput[128];
    char quit[5] = "quit";

    while (1) {
        fgets(userInput, sizeof(userInput), stdin);
        toLower(userInput);
        userInput[strlen(userInput)-1] = '\0';

        if (strcmp(userInput, quit) == 0) break;

        printf(userInput);
    }
};
