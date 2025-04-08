#include <stdio.h>

int main() {
    int variable = 42;
    printf("Adresse der Variable: %p\n", (void*)&variable);
    return 0;
}
