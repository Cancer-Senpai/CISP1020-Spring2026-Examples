#ifndef FISH_H
#define FISH_H

#include <stdio.h>

#define MAX_CHARS 81

typedef struct  {
   char name[MAX_CHARS];
   char type[MAX_CHARS];
   int age;
} fish_t;

void setFish(fish_t *f, char n[], char t[], int a);
void printFish(const fish_t *f);

#endif