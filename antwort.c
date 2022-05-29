#include <stdio.h>
#include <string.h>

void schritte();

extern int i;
extern char wand[5];

int drehung(int x) {
    x++;
    return x;
}

void antwort (int *s) {
 
    if (strcmp(wand, "ja") == 0 || strcmp(wand, "Ja") == 0) {
        i = drehung(i);
        printf("Drehung\n");
    } else if (strcmp(wand, "nein") == 0 || strcmp(wand, "Nein") == 0) {
        schritte(s);
    } else {
        printf("Ungueltige Eingabe!\n");
    };
  
};

