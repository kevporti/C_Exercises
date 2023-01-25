#include <stdio.h>
#include <math.h>

int main() {

  exerciseEighteen();
  
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

// Ex 6: Write a program that contains a secret number between 0 and 500 which will be fixed (use #define for this).
// The user should, through typing numbers, guess such value, ann in each try the program should respond "the number
// is greater" or "the number is less" when appropriate. The user will have a max of 15 attempts.

#define SECRET 521

void exerciseSix() {
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

// Ex 8: Read a positive value and make the next sequence: If the number is even, divide it by 2; If the number is not even
// multiply it by 3 and sum 1. Repeat until the value is 1, printing each value and how many operations were done . If the
// value is less than 1, show a message with the word "ERROR".

void exerciseEight() {
  int number;

  printf("Por favor, ingrese un valor mayor a uno: ");
  scanf("%d", &number);

  if (number < 1) {
    printf("\nERROR. El valor ingresado es menor que uno.");
  } else {
    printf("\nEl valor inicial es: %d", number);
    for (int i = 0; i >= 0; i++) {
      if (number == 1) {
        printf("\nValor final %d. Numero de pasos: %d", number, i);
        i = -2;
      } else if (number % 2 == 0) {
        number /= 2;
        printf("\nEl siguiente valor es: %d", number);
      } else {
        number = (number * 3) + 1;
        printf("\nEl siguiente valor es: %d", number);
      }
    }
  }
}

// Part 3: Arrays.
// Ex 9: Write a program that completes an array with the first 100 integer numbers from 0, and shows them
// in order ascendent.

void exerciseNine() {
  int array[100];

  for (int i = 0; i <= 100; i++) {
    array[i] = i;
    printf("%d\n", array[i]);
  }
  
}

// Ex 10: Write a program that completes an array with the even numbers that are between 100 and 200, and shows
// then in order descendent.

void exerciseTen() {
  int arr[50];

  for (int i = 200; i >= 100; i--) {
    if (i % 2 == 0) {
      arr[200 - i] = i;
      printf("%d\n", arr[200 - i]);
    }
  }
}

// Ex 11: Write a program that completes an array with the first 50 multiples of 3, and shows them in order
// descencent.

void exerciseEleven() {
  int arr[50], aux = 1;

  for (int i = 50; i > 0; i--) {
    
    if (i % 3 == 0) {
      arr[aux] = i;
      printf("%d\n", arr[aux]);

      aux++;
    }
  }
}

// Ex 12: Write a program that reads an array 'a' of 10 integers and an integer 'n', and prints the index
// of the array 'a' where 'n' is (if is in the array), and -1 otherwise.

void exerciseTwelve() {
  int a[10], n;

  // Asking for 'n'.
  printf("Por favor, ingrese un numero cualquiera: ");
  scanf("%d", &n);

  // Asking for a number and inserting the rule into the array.
  for (int i = 0; i < 10; i++) {
    printf("Ahora ingrese un numero para el array: ");
    scanf("%d", &a[i]);
    if (a[i] == n) {
      a[i] = i;
    } else {
      a[i] = -1;
    }
  }

  // Printing the array.
  for (int i = 0; i < 10; i++) {
    printf("Indice array: %d\n", a[i]);
  }
}

// Ex 13: Write a program that read an integer 'n' between 5 and 100, and then asks the user the insert of 'n'
// numbers, save them into an array, and finally determine if the sum of all numbers in the array is greater
// than 30. If the user inserts an 'n' number less than 5 or greater than 100, print an error and don't execute
// the program.

void exerciseThirteen() {
  int n, sum = 0;

  // Asking the 'n' int.
  printf("Por favor, ingrese un numero entre 5 y 100: ");
  scanf("%d", &n);
  
  if (n >= 5 && n <= 100) {
    int a[n];

    // Asking for the numbers.
    for (int i = 0; i < n; i++) {
      printf("Por favor, ingrese un numero: ");
      scanf("%d", &a[i]);
      sum += a[i];
    }

    // Givig feedback to the user.
    if (sum > 30) {
      printf("La suma de los numeros ingresados es mayor que 30!");
    } else {
      printf("La suma de los numeros ingresados NO es mayor que 30.");
    }
  // Error if number n < 5 or n > 100.
  } else {
    printf("ERROR. El numero ingresado no coincide con lo pedido.\nPor favor, intentelo nuevamente.");
  }
}

// Ex 14: Write a program that reads integers until it's inserted a negative number, and then print which
// value between 0 and 99 was inserted more.

void exerciseFourteen() {
  int number = 0, aux = 0, auxId = 0;
  int arr[100];

  // Initializing the array to start counting the numbers.
  for (int i = 0; i < 100; i++) {
    arr[i] = 0;
  }

  // Asking the numbers until it's negative and keep the count in the array.
  while (number >= 0) {
    arr[number] += 1;
    printf("Por favor, ingrese un numero: ");
    scanf("%d", &number);
  }

  // Looking for the highest counted number.
  for (int i = 0; i < 100; i++) {
    if (arr[i] > aux) {
      aux = arr[i];
      auxId = i;
    }
  }

  //Printing the result.
  printf("Numero mas constado:\n%d: %d veces.\n", auxId, arr[auxId]);
}

// Ex 16: Write a function 'multAlt' that takes an array along with the lenght
// of it, and returns the product of the elements in which their index is even.

int multArr(int arr[], int lenghtOfArr) {
  int mult = 1;

  for (int i = 0; i < lenghtOfArr; i++) {
    if (i % 2 == 0) {
      mult *= arr[i];
      printf("%d\n", mult);
    }
  }

  return mult;
}

void exerciseSixteen() {
  int result;
  int array[5] = {5, 5, 5, 5, 5 };

  result = multArr(array, 5);

  printf("Resultado de la multiplicacion: %d", result);
}

// Part 4: Character String.
// Ex 18: Write a function that gets a character string and a character, and
// returns 0 if the character is in the string and 1 if not.

int compareStringToArray(char arr[], char oneChar) {

  // Loop until end of character string.
  for (int i = 0; i < strlen(arr); i++) {
    
    // Checking character.
    if (arr[i] == oneChar) {
      return 0;
    }
  }

  // If not coincidence found, return that info.
  return 1;
}

void exerciseEighteen() {
  int result;
  char array[] = "Hola que tal", oneChar = 'y';

  result = compareStringToArray(array, oneChar);
  printf("%d", result);
}