#include <stdio.h>

int main()
{
   exerciseSeven();

   return 0;
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

// Ex 6: Build a program that calculates and presents on the screen the sign of the zodiac by the input of the day and month
// of birth as integer numbers.

int exerciseSix() {
  int day, month;

  printf("Ingrese el dia de nacimiento: ");
  scanf("%d", &day);
  printf("Ingrese el mes de nacimiento: ");
  scanf("%d", &month);

  if ((day >= 22 && month == 12) || (day <= 20 && month == 1)) {
    printf("El signo para esa fecha es CAPRICORNIO.");
  } else if ((day >= 21 && month == 1) || (day <= 19 && month == 2)) {
    printf("El signo para esa fecha es ACUARIO.");
  } else if ((day >= 20 && month == 2) || (day <= 20 && month == 3)) {
    printf("El signo para esa fecha es PISCIS.");
  } else if ((day >= 21 && month == 3) || (day <= 19 && month == 4)) {
    printf("El signo para esa fecha es ARIES.");
  } else if ((day >= 20 && month == 4) || (day <= 20 && month == 5)) {
    printf("El signo para esa fecha es TAURO.");
  } else if ((day >= 21 && month == 5) || (day <= 21 && month == 6)) {
    printf("El signo para esa fecha es GEMINIS.");
  } else if ((day >= 22 && month == 6) || (day <= 21 && month == 7)) {
    printf("El signo para esa fecha es CANCER.");
  } else if ((day >= 22 && month == 7) || (day <= 21 && month == 8)) {
    printf("El signo para esa fecha es LEO.");
  } else if ((day >= 22 && month == 8) || (day <= 22 && month == 9)) {
    printf("El signo para esa fecha es VIRGO.");
  } else if ((day >= 23 && month == 9) || (day <= 22 && month == 10)) {
    printf("El signo para esa fecha es LIBRA.");
  } else if ((day >= 23 && month == 10) || (day <= 21 && month == 11)) {
    printf("El signo para esa fecha es ESCORPIO.");
  } else if ((day >= 22 && month == 11) || (day <= 21 && month == 12)) {
    printf("El signo para esa fecha es SAGITARIO.");
  }
  
  return 0;
}

// Ex 7: It's a leap-year if it's divisible by 4 and not by 100, or if it's divisible by 400. Write a program that can read
// a year and returns if it's leap-year or not.

int exerciseSeven() {
  int year;

  printf("Ingrese un año: ");
  scanf("%d", &year);

  if ((year % 4 == 0) || (year % 100 == 0 && year % 400 == 0)) {
    printf("El año %d es bisiesto.", year);
  } else {
    printf("El año %d no es bisiesto", year);
  }
  
  return 0;
}