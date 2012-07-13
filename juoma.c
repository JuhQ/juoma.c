/*
 * This is a simple drinking game. Juoma means "a drink" in Finnish.
 * Rules are simple:
 *   - List players
 *   - List available drinks
 *   - The person with the highest number has to drink the drink provided by the game,
 *      player can decide portion size
 *   - If you puke or pass out, you lose
 *   - If a drink runs out, it must be removed from the drink list
 *   - Last one who's not thrown up or passed out, IS THE WINNER!
 *   - Do not die
 *   - Have fun
 *
 *  Juha Tauriainen @juha_tauriainen juha@bin.fi
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define YELLOW "\x1B[33m"
#define GREEN "\x1B[32m"
#define WHITE "\x1B[37m"

int main(void) {
    
    // list players here
    char * players[5] = {"Juha", "Pekka", "Timo", "Liisa", "Maija"};
    
    // list available drinks here
    char * drinks[4] = {"Beer", "Koskenkorva", "Whiskey", "Milk"};
    
    srand(time(NULL));
    int i = 5;
    while(i--) {
        int random = rand() % 100 + 1;
        char randomDrink = rand() % 4;
        printf("%s%s%s rolls %s%d%s for drink %s\n", YELLOW, players[i], WHITE, GREEN, random, WHITE, drinks[randomDrink]);
    }
    
    return 0;
}