#include <stdio.h>

int main() {

  exerciseTwo();
  
  return 0;
}

// Part 1: Switch.
// Ex 1: Write a program that asks for the result of launching a six-face dice and show the number in letters
// of the opposite face of the result given. If the given value is not in the range of the dice, show a message.

int exerciseOne() {
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

  return 0;
}

// Ex 2: In the next table it's shown the number of beds of the bedrooms of a Cottage and the floor where it is.
// (Habitacion 1. Azul, 2 camas, primera planta. Habitacion 2. Roja, 1 cama, primera planta. Habitacion 3. Verde, 3 camas, segunda planta.
// Habitacion 4. Rosa, 2 camas, segunda planta. Habitacion 5. Gris, 1 cama, tercera planta.)
// Write a program that 1. shows the list of the bedrooms of the house. 
// 2. Asks the number asociated to the bedroom.
// 3. Shows the floor and the number of beds.
// If the number is not asociated to any bedroom, show a message.

int exerciseTwo() {
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

  return 0;
}