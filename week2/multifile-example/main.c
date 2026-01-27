#include <stdio.h>
#include <string.h>
#include "fish.h"

int main() {
    fish_t f;

    setFish(&f, "Fredrick", "goldfish", 3);
    printFish(&f);

    return 0;
}
