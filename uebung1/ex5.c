#include <stdio.h>

struct composite {
    char aChar;
    int d;
};

int main() {
    struct composite cmp;
    cmp.aChar = '/';           // ASCII: 47 (0x2F)
    cmp.d = 0xdeadbeef;
    
    // Ausgabe der Gesamtgröße
    printf("Größe des Structs: %zu Byte\n", sizeof(cmp));
    
    // Ausgabe der einzelnen Bytes:
    unsigned char *start = (unsigned char *)&cmp;
    for (size_t offset = 0; offset < sizeof(cmp); offset++) {
        printf("Byte %2zu: Adresse: %p – Wert: 0x%02X\n", offset, start + offset, start[offset]);
    }
    printf("\n");
    
    return 0;
}
