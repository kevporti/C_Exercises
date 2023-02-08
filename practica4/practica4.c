#include <stdio.h>
#include <stdlib.h>

int swap(int *x, int *y);
int strlength(char *c);
void strcopy(char *dest, char *src);

int main() {
  char string1[12] = "Hola mundo.", string2[12];
  printf("%s, %s\n", string1, string2);
  strcopy(string2, string1);
  printf("%s, %s\n", string1, string2);

  return 0;
}

// Part 1: Pointers.

// Ex 1: Define a function 'swap' that, given two integer variables, swaps the contents.

int swap(int *x, int *y) {
  int aux = 0;

  aux = *x;
  *x = *y;
  *y = aux;

  return 0;
}

// Ex 2: Define versions of the following functions about strings using pointers.
//    - int strlen(char *c); This determines the length of a string.
//    - void strcpy(char *s, char *t); This copies the 't' string to 's'.

int strlength(char *c) {
  int counter = 0;
  while (c[counter]!= '\0') {
    counter++;
  }
  return counter;
}

void strcopy(char *s, char *t) {
  int i = 0;

  while (t[i] != '\0') {
    s[i] = t[i];
    i++;
  }
}
