#include <stdio.h>
#include <math.h>

int main() {

  exerciseSix();
  
  return 0;
}

// Part 1: Switch.
// Ex 1: Write a program that asks for the result of launching a six-face dice and show the number in letters
// of the opposite face of the result given. If the given value is not in the range of the dice, show a message.

void exerciseOne() {
  int number;

  printf("Por favor, ingrese el resultado obtenido de haber girado el dado: ");
  scanf("%d", &number);

  switch (number) {
  case 1:
    printf("SEIS");
    break;
  case 2:
    printf("CINCO");
    break;
  case 3:
    printf("CUATRO");
    break;
  case 4:
    printf("TRES");
    break;
  case 5:
    printf("DOS");
    break;
  case 6:
    printf("UNO");
    break;
  default:
    printf("Numero incorrecto. Para intentar nuevamente, re-ejecute el programa.");
    break;
  }
}

// Ex 2: In the next table it's shown the number of beds of the bedrooms of a Cottage and the floor where it is.
// (Habitacion 1. Azul, 2 camas, primera planta. Habitacion 2. Roja, 1 cama, primera planta. Habitacion 3. Verde, 3 camas, segunda planta.
// Habitacion 4. Rosa, 2 camas, segunda planta. Habitacion 5. Gris, 1 cama, tercera planta.)
// Write a program that 1. shows the list of the bedrooms of the house. 
// 2. Asks the number asociated to the bedroom.
// 3. Shows the floor and the number of beds.
// If the number is not asociated to any bedroom, show a message.

void exerciseTwo() {
  int numberOfBedroom;

  printf("Habitaciones \n1. Azul \n2. Roja \n3. Verde \n4. Rosa \n5. Gris\n");
  printf("Por favor, seleccione el numero de una habitacion para conocer mas detalles: ");
  scanf("%d", &numberOfBedroom);

  switch (numberOfBedroom) {
  case 1:
    printf("Esta habitacion se encuentra en el primer piso. Tiene dos camas.");
    break;
  case 2:
    printf("Esta habitacion se encuentra en el primer piso. Tiene una cama.");
    break;
  case 3:
    printf("Esta habitacion se encuentra en el segundo piso. Tiene tres camas.");
    break;
  case 4:
    printf("Esta habitacion se encuentra en el segundo piso. Tiene dos camas.");
    break;
  case 5:
    printf("Esta habitacion se encuentra en el tercer piso. Tiene una cama.");
    break;
  default:
  printf("Numero incorrecto. Este numero de habitacion no se encuentra en nuestras opciones.");
    break;
  }
}

// Part 2: For Structure.
// Ex 3: Calculate through For Loop the next sumatories:
// 1. n=1 to 100, sumatory of (1/n).
// 2. k=1 to 30, sumatory of (1/(k^2)).
// 3. j=1 to 25, sumatory of (1/(j^j)).
// 4. i=2 to 10, sumatory of ((i+1)*i).

void exerciseThree() {
  double result = 0, aux = 0;

  // First sumatory.
  for (double n = 1; n <= 100; n++) {
    result += (1 / n);
  }
  printf("La primer sumatoria da %f\n", result);
  result = 0;

  // Second sumatory.
  for (int k = 1; k <= 30; k++) {
    aux = pow(k, 2);
    result += (1 / aux);
  }
  printf("La segunda sumatoria da %f\n", result);
  result = aux = 0;
  
  // Third sumatory.
  for (int j = 1; j <= 25; j++) {
    aux = pow(j, j);
    result += (1 / aux);
  }
  printf("La tercera sumatoria da %f\n", result);
  result = aux = 0;
  
  // Fourth sumatory.
  for (int i = 2; i <= 10; i++) {
    aux = i + 1;
    result += (int)(aux * i);
  }
  printf("La cuarta sumatoria da %.2f", result);
}

// Ex 4: A tuple of three (a, b, c) of natural numbers is a Pythagoric tuple if (a^2 + b^2 = c^2).
// Write a program that prints all the pythagoric tuple with a <= 20 and b <= 30.

void exerciseFour() {

  int a, b, c;
  double aux;
  for (a = 1; a <+ 20; a++) {
    for (b = 1; b <+ 30; b++) {
      // Calculating c.
      aux = pow(a, 2) + pow(b, 2);
      c = sqrt(aux);

      // Filtering the non-natural numbers.
      if (c == sqrt(aux)) {
        printf("(%d, %d, %d)", a, b, c);
      }
    }
  }
}

// Ex 5: Write a program that contains a secret number between 0 and 500 which will be fixed (use #define for this).
// The user should, through typing numbers, guess such value, ann in each try the program should respond "the number
// is greater" or "the number is less" when appropriate. The user will have a max of 15 attempts.

#define SECRET 521

void exerciseFive() {
  int numberOfUser;

  printf("Existe un numero secreto entre el 0 y el 500, tu objetivo es adivinarlo. \nTienes 15 intentos.\n");
  for (int i = 1; i <= 15; i++) {
    printf("Intento numero %d: ", i);
    scanf("%d", &numberOfUser);

    if (numberOfUser == SECRET) {
      printf("Has adivinado el numero secreto, Felicidades!");
      i = 16;
    }
  }
}