#include <stdio.h>

int main()
{
   exerciseFive();
}

// Part 2: Selection
// Ex 4: Determine in which state is the water based on it's temperature: If it's negative, the state will be SOLID.
// if it's less than 100 it's be LIQUID and if it's more than 100 the state will be GAS.

int exerciseFour(){
  int temperature;

  printf("Por favor ingrese el valor de la temperatura del agua: ");
  scanf("%d", &temperature);

  if (temperature < 0) {
    printf("El estado del agua es SOLIDO.");
  } else if (temperature > 0 && temperature < 100) {
    printf("El estado del agua es LIQUIDO.");
  } else if (temperature > 100) {
    printf("El estado del agua es GASEOSO.");
  }

  return 0;
}

// Ex 5: Read the note (integer) of a student and show a message following the next table: insuficient (2 to 5), approved (6),
// good (7), very good (8), distinguished (9), outstanding (10).

int exerciseFive() {
  int note;

  printf("Ingrese la nota del estudiante: ");
  scanf("%d", &note);

  if (note > 2 && note < 5) {
    printf("El resultado es INSUFICIENTE.");
  } else if (note == 6){
    printf("El resultado es APROBADO.");
  }else if (note == 7){
    printf("El resultado es BUENO.");
  } else if (note == 8){
    printf("El resultado es MUY BUENO.");
  } else if (note == 9){
    printf("El resultado es DISTINGUIDO.");
  } else if (note == 10) {
    printf("El resultado es SOBRESALIENTE.");
  } else {
    printf("Ha habido un error.");
  }

  return 0;
}