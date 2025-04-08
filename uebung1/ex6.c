#include <stdio.h>
#include <stddef.h>
#include <stdint.h>

struct composite {
    char aChar;
    int anInt;
    double aFloat;
};

int main() {
    printf("Offsets:\n");
    printf("aChar  = %zu\n", offsetof(struct composite, aChar));
    printf("anInt  = %zu\n", offsetof(struct composite, anInt));
    printf("aFloat = %zu\n", offsetof(struct composite, aFloat));
    
    // Laufzeitüberprüfung des Alignments einer Variablen:
    struct composite cmp;
    uintptr_t addr = (uintptr_t)&cmp;
    // Beispiel: Prüfen, ob die Adresse ein Vielfaches von 4 (oder 8, je nach Datentyp) ist.
    if (addr % _Alignof(struct composite) == 0) {
        printf("Die Variable ist korrekt ausgerichtet.\n");
    } else {
        printf("Die Variable ist nicht korrekt ausgerichtet.\n");
    }
    
    return 0;
}
