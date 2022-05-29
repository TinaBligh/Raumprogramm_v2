#include <stdio.h>

void antwort(int *s);

int i = 0; // Drehungen

char wand[5]; // Antwort

void main () {
    int s = 0; // Schritte

    while (i<4) {
        printf ("Ist hier eine Wand? Antworte mit ja oder nein!\n");
        scanf ("%s", wand);
        antwort(&s);
        
    };
    if (i == 4) {
        printf ("Du hast den Raum einmal umrundet.\n");
        printf ("Du bist %d Schritte gegangen.", s);
    };
};

