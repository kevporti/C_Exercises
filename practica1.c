#include <stdio.h>

int main()
{
   esRectangulo(3, 4, 5);

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

// Part 3: While Loop.
// Ex 9: Write a program that show the integer numbers between 1 and 100.

int exerciseNine() {
  int number = 1;
  while (number <= 100) {
    printf("%d \n", number);
    number += 1;
  }

  return 0;
}

// Ex 10: Write a program that shows the impair numbers between 1 and 100.

int exerciseTen() {
  int number = 1;

  while (number <= 100) {
    if (number % 2 != 0) {
      printf("%d \n", number);
    }
    number += 1;
  }
  
  return 0;
}

// Ex 11: Write a program that asks for two numbers and shows all the numbers that goes from the first to the second.
// The input has to validate that the first number is less than the second.

int exerciseEleven() {
  int firstNumber, secondNumber;

  printf("Nota. Se le va a pedir ingresar dos numeros, por favor asegurese de que el primer numero es mas chico que el segundo.\n");
  printf("Por favor, ingrese el primer numero: ");
  scanf("%d", &firstNumber);
  printf("Por favor, ingrese el segundo numero: ");
  scanf("%d", &secondNumber);

  if (firstNumber >= secondNumber) {
    printf("El segundo numero es mas chico que el primero. El programa se reiniciara.");
    exerciseEleven();
  }
  while (firstNumber <= secondNumber) {
    printf("%d \n", firstNumber);
    firstNumber += 1;
  }

  return 0;
}

// Ex 12: Write a program that given a number, it determines if it's a prime number or not.

int exerciseTwelve() {
  int number, i = 1, counterOfDivisors = 0;

  printf("Por favor, ingrese un numero: ");
  scanf("%d", &number);

  // If to filter negative numbers or the 0 (cases where the prime number is not defined).
  if (number > 0) {
    // While to go through all the numbers in between.
    while(i <= number) {
      // If to filter the 1 and the number itself in which cases the number is always divisible.
      if (i != 1 && i != number && (number % i == 0)) {
        counterOfDivisors += 1;
      }

      i += 1;
    }
    if (counterOfDivisors == 0) {
    printf("El numero %d es primo.", number);
    } else {
      printf("El numero %d no es primo", number);
    }
  } else {
    printf("\nEl numero ingresado no puede ser evaluado para determinar si es un numero primo.");
  }

  return 0;
}

// Ex 13: Write a program that asks for a number and shows the factorial of it.
// Suggestion, define the factorial variable as a double.

int exerciseThirteen() {
  int number;
  double factorial = 1.0;

  printf("Por favor, ingrese un numero: ");
  scanf("%d", &number);

  while(number > 0) {
    factorial = factorial * number;
    number -= 1;
  }
  printf("Su factorial es: %.2f", factorial);

  return 0;
}

// Ex 14: The patients with symphtoms of an illness are inserted into the hospital if
// if they have a value greater than 0.6 in the medition of an index, and they go through
// a surgery if the value is greater than 0.9. Write a program that reads from the keyboard 
// the number of patients followed by their age and the index of each patient, and calculate
// the age average of inserted patients, analyzed patients and those who went through the
// surgery.

int exerciseFourteen() {
  int patients, patientsInserted = 0, patientsOfSurgery = 0, i = 0, name, age, indexNumber;
  double ageAverageOfAll = 0.0, ageAverageOfInserted = 0.0, ageAverageOfSurgery = 0.0;
  printf("Por favor, ingrese la cantidad de pacientes: ");
  scanf("%d", &patients);

  while (i < patients) {
    printf("\nPor favor, ingrese el nombre del paciente: ");
    scanf("%d", &name);
    printf("\nSu edad: ");
    scanf("%d", &age);
    printf("\nY el numero de su indice: ");
    scanf("%d", &indexNumber);

    ageAverageOfAll += age;

    if (indexNumber >= 0.6) {
      ageAverageOfInserted += age;
      patientsInserted += 1;
    }
    if (indexNumber >= 0.9) {
      ageAverageOfSurgery += age;
      patientsOfSurgery += 1;
    }
  i += 1;
  }
  printf("The average age of all the patients is: %d\n", (ageAverageOfAll/patients));
  printf("The average age of patients who were inserted is: %d\n", (ageAverageOfInserted/patientsInserted));
  printf("The average age of patients who were to surgery is: %d\n", (ageAverageOfSurgery/patientsOfSurgery));

  return 0;
}

// Part 4: Functions
// Ex 15: Write a function max that takes two integers as parameters and returns the max between those.
// Use that function to calculate the max between four integers asked to the user.

int maxFunction(int a, int b) {

  if (a > b) {
    return a;
  }
  else if (b > a) {
    return b;
  }
  else {
    return a;
  }
}

int exerciseFifteen() {
  int firstNumber, secondNumber, thirdNumber, fourthNumber;
  char askingForNumber[30] = "Por favor, ingrese un numero: ", tellingNumber[20] = "El mayor numero es";

  printf("%s", askingForNumber);
  scanf("%d", &firstNumber);
  printf("%s", askingForNumber);
  scanf("%d", &secondNumber);
  printf("%s", askingForNumber);
  scanf("%d", &thirdNumber);
  printf("%s", askingForNumber);
  scanf("%d", &fourthNumber);

  if (maxFunction(firstNumber, secondNumber) == firstNumber) {
    if (maxFunction(firstNumber, thirdNumber) == firstNumber) {
      if (maxFunction(firstNumber, fourthNumber) == firstNumber) {
        printf("%s %d", tellingNumber, firstNumber);
      } else {
        printf("%s %d", tellingNumber, fourthNumber);
      }
    } else {
      if (maxFunction(thirdNumber, fourthNumber) == thirdNumber) {
        printf("%s %d", tellingNumber, thirdNumber);
      } else {
        printf("%s %d", tellingNumber, fourthNumber);
      }
    }
  } else {
    if (maxFunction(secondNumber, thirdNumber) == secondNumber) {
      if (maxFunction(secondNumber, fourthNumber) == secondNumber) {
        printf("%s %d", tellingNumber, secondNumber);
      } else {
        printf("%s %d", tellingNumber, fourthNumber);
      }
    } else {
      if (maxFunction(thirdNumber, fourthNumber) == thirdNumber) {
        printf("%s %d", tellingNumber, thirdNumber);
      } else {
        printf("%s %d", tellingNumber, fourthNumber);
      }
    }
  }

  return 0;
}

// Ex 16:Three positive numbers can be the measure of a triangule's side iif the max number is less than the sum of the other two.
// Write a function 'ladosTriangulo' that returns 1 if the three numbers given prove that condition, and 0 if otherwise.

int ladosTriangulo(int firstSide, int secondSide, int thirdSide) {

 if (firstSide > secondSide && firstSide > thirdSide) {
  if (firstSide < (secondSide + thirdSide)) {
    return 1;
  } else {
    return 0;
  }
 } else if (secondSide > firstSide && secondSide > thirdSide) {
  if (secondSide < (firstSide + thirdSide)) {
    return 1;
  } else {
    return 0;
  }
 } else if (thirdSide > firstSide && thirdSide > secondSide) {
  if (thirdSide < (secondSide + firstSide)) {
    return 1;
  } else {
    return 0;
  }
 } else {
  return 0;
 }
}

// Ex 17: Define a function 'esRectangulo' that takes three integers and return 1 if the given numbers can be sides of a right triangle, and 0 if otherwise.
// Sugestion: a way would be to use Pythagoras.

int esRectangulo(int firstSide, int secondSide, int thirdSide) {

  if (ladosTriangulo(firstSide, secondSide, thirdSide) == 1) {
    if ((firstSide^2) == ((secondSide^2) + (thirdSide^2))) {
      printf("Es un triangulo rectangulo.");
      return 1;
    } else if ((secondSide^2) == ((thirdSide^2) + (firstSide^2))) {
      printf("Es un triangulo rectangulo.");
      return 1;
    } else if ((thirdSide^2) == ((secondSide^2) + (firstSide^2))) {
      printf("Es un triangulo rectangulo.");
      return 1;
    } else {
      printf("No es un triangulo rectangulo.");
      return 0;
    }
  } else {
    printf("No se puede crear un triangulo");
    return 0;
  }
}