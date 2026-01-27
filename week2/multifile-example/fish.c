#include <stdio.h>
#include <string.h>
#include "fish.h"

void setFish(fish_t *f, char n[], char t[], int a) {
    strcpy(f->name, n);
    strcpy(f->type, t);
    f->age = a;
}

void printFish(const fish_t *f) {
    printf("--- <>< --- \n");
    printf("Name: %s\n", f->name);
    printf("Name: %s\n", f->type);
    printf("Age: %d\n", f->age);
}