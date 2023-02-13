#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int swap(int *x, int *y);
int strlength(char *c);
void strcopy(char *dest, char *src);
void exerciseEight();

int main() {
  exerciseEight();

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


// Part 2: Structures.

// Ex 3: Define a struct 'Punto' to represent a point in the plane, and an struct 'Rectangulo' that represents
// a rectangle (A rectangle is represented by the upper left point and the lower right point).

typedef struct {
  int x;
  int y;
} Punto;

typedef struct {
  Punto *upperLeftPoint;
  Punto *lowerRightPoint;
} Rectangulo;


// Ex 4: Define a function 'inRect' that determines whether a point is inside the rectangle or not.

bool inRect(Punto point, Rectangulo rectangle) {
  //Checking if the point is inside the rectangle from the upperLeftPoint.
  if (point.x >= rectangle.upperLeftPoint->x && point.y <= rectangle.upperLeftPoint->y) {
    //Checking if the point is inside the rectangle from the lowerRightPoint.
    if (point.x <= rectangle.lowerRightPoint->x && point.y >= rectangle.lowerRightPoint->y) {
      return true;
    } else {
      return false;
    }
  } else {
    return false;
  }
}

void exerciseFour() {
  Punto point1, point2, point3;
  Rectangulo rectangle;

  // Point to check.
  point1.x = 2;
  point1.y = 3;

  // Points of rectangle.
  // upperLeftPoint.
  point2.x = 4;
  point2.y = 7;
  // lowerRightPoint.
  point3.x = 6;
  point3.y = 5;

  //Rectangle.
  rectangle.lowerRightPoint = &point3;
  rectangle.upperLeftPoint = &point2;
  if (inRect(point1, rectangle) == 1) {
    printf("El punto (%d, %d) esta dentro del rectangulo.", point1.x, point1.y);
  } else {
    printf("El punto (%d, %d) NO esta dentro del rectangulo.", point1.x, point1.y);
  }
}


// Ex 5: Define a struct 'Contacto' that has as fields: a string for the name of a person and a string
// for the phone number.
// Implement a function 'crearContacto' that asks the data and returns a 'Contacto' struct. Get memory
// dinamically to store the data of the person.

typedef struct {
  char *name;
  char *phone;
} Contacto;

Contacto* crearContacto() {
  char temp1[100], temp2[100];
  Contacto *createdContact = malloc(sizeof(Contacto));

  // Asking for the name of the contact.
  printf("Por favor, ingrese el nombre del contacto: ");
  scanf("%[^\n]", temp1);
  getchar();
  createdContact->name = malloc(sizeof(char) * (strlen(temp1) + 1));
  strcpy(createdContact->name, temp1);

  // Asing for the phone number of the contact.
  printf("Por favor, ingrese el numero de telefono del contacto: ");
  scanf("%[^\n]", temp2);
  getchar();
  createdContact->phone = malloc(sizeof(char) * (strlen(temp2) + 1));
  strcpy(createdContact->phone, temp2);

  return createdContact;
}

void exerciseFive() {
  Contacto *newContact = crearContacto();
  printf("El nombre del contacto es: %s, y su numero es: %s", newContact->name, newContact->phone);

  free(newContact->name);
  free(newContact->phone);
  free(newContact);
}


// Ex 6: Define a struct 'Agenda' that stores an array of structs 'Contacto', and an integer to count the
// elements of the array. Define a function that adds a contact to the 'Agenda', and another to see the data
// of all contacts.

typedef struct {
  Contacto *contacts;
  int numberOfContacts;
} Agenda;

Agenda createAgenda() {
  Agenda agenda;

  // Setting initial parameters.
  agenda.numberOfContacts = 0;
  agenda.contacts = malloc(sizeof(Contacto));

  return agenda;
}

void addContact(Agenda *agenda) {
  Contacto *newContact;
  newContact = crearContacto();

  // Reallocating memory to add the new contact.
  agenda->numberOfContacts += 1;
  agenda->contacts = realloc(agenda->contacts, sizeof(Contacto) * (agenda->numberOfContacts + 1));
  agenda->contacts[agenda->numberOfContacts] = *newContact;
}

void printAgenda(Agenda *agenda) {
  printf("----AGENDA----\n");

  for (int i = 1; i <= agenda->numberOfContacts; i++) {
    printf("Contacto %d:\n  Nombre: %s, Numero: %s\n", i, agenda->contacts[i].name, agenda->contacts[i].phone);
  }

  printf("---- Fin AGENDA ----");
}

void exerciseSix() {
  Agenda *agenda;
  agenda = malloc(sizeof(Agenda));
  *agenda = createAgenda();
  addContact(agenda);
  addContact(agenda);
  printAgenda(agenda);

  free(agenda->contacts);
  free(agenda);
}


// Part 3: Files.

// Ex 7: Define a function with the following signature: void filecopy(FILE *ifp, FILE *ofp) that copies the contents of
// the 'ifp' file into the 'ofp' file.

void filecopy(FILE *ifp, FILE *ofp) {
  char line[1024];

  ifp = fopen("../text.txt", "r");
  ofp = fopen("../text2.txt", "w");

  while (fscanf(ifp, "%[^\n]", line) != EOF) {
    fprintf(ofp, "%s\n", line);
    fgetc(ifp);
  }

  fclose(ifp);
  fclose(ofp);
}

void exerciseSeven() {
  FILE *ifp, *ofp;
  
  filecopy(ifp, ofp);
}


// Ex 8: Define a function that, given the name of a file as argument, opens the file, counts the number of lines
// creates a vector of strings, and then stores the lines in the vector.

void storeLineInVector(char *line, char ***vector, int numberOfLines) {
  // If its the start of the file, creates dynamic memory.
    if (numberOfLines == 0) {
      *vector = malloc(sizeof(char *));
    } else {
      // Reallocation of the dynamic memory to store more lines.
      *vector = realloc(*vector, (sizeof(char *) * (numberOfLines + 1)));
    }
    // Appends the line to the vector.
    (*vector)[numberOfLines] = line;
}

char** linesOfFile(char *fileName, int *numberOfLines) {
  char lineTemp[1024], **vector;
  FILE *file;
  file = fopen(fileName,"r");

  if (file == NULL) {
    printf("Error opening file\n");
  }
  
  while (fscanf(file, "%[^\n]", lineTemp) != EOF) {
    char *line;

    line = malloc(strlen(lineTemp) + 1);
    strcpy(line, lineTemp);

    storeLineInVector(line, &vector, *numberOfLines);

    (*numberOfLines)++;
    fgetc(file);
  }

  fclose(file);
  
  return vector;
  
}

void exerciseEight() {
  int numberOfLines = 0;
  char fileName[] = "text3.txt", **vector;
  vector = linesOfFile(fileName, &numberOfLines);
  for (int i = 0; i < numberOfLines; i++) {
    printf("%s\n", vector[i]);
  }
  
}