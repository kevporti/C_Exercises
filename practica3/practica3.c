#include <stdio.h>
#include <stdlib.h>

int main(){
    char *ptr = "hola mundo";
    ptr[0] = 's';
    printf("%s\n", ptr);
  }

// Memory Management.
/* Which is the output of the following programs with pointers? Justify your answer.

--------------------------------------------------------------------------
1. 
    int* punt;
    int x=7;
    int y = 5;
    punt = &x;
    *punt = 4;
    printf("%d %d", *punt, y);

This code sets the pointer 'punt' to the address of 'x', and dereferencing it will point to the value of 'x', so when doing so and changing
it's value to 4, it will be stored in x. When printing, first will be printed the value of 'x' (which is now 4), and then print the value of
'y' (which is 5).


--------------------------------------------------------------------------
2.
    int* punt;
    int x=7;
    int y = 5;
    punt=&x;
    x = 4;
    punt=&y;
    printf("%d %d", *punt, x);

This code sets the pointer 'punt' to the address of 'x', changes the value of 'x' to 4 and then changes the pointer 'punt' to point to 'y'.
This will print the value of 'y' (which is 5) because of the dereference of the pointer, and also will printf the value of 'x' (which is 4).


--------------------------------------------------------------------------
3.
    int* punt, i;
    int x[]={1, 2, 3, 4, 5};
    punt = x;
    *punt = 9;
    for(i=0; i<5; i++) {
      printf("%d", x[i]);
    }

This code initializes the pointer 'punt', the integer 'i' and the array 'x[]'. Then assigns the address of the array 'x' in the pointer 'punt'
(since it's an array, it doesn't use the '&' symbol to get the address), and when dereferencing (and changing it's value to 9) this change
should be reflected in the first element of the array. Finally, when printing all the elements in the array with the For Loop, the output
should be 92345 (each element of the array, and the first one changed).


--------------------------------------------------------------------------
4.
    int* punt, i;
    int x[]={1, 2, 3, 4, 5};
    punt = x;
    *(punt+2) = 9;
    *(x+3) = 7;
    punt[1]=11;
    for(i=0; i<5; i++) {
      printf("%d", *(punt+i));
    }

This code initializes the pointer 'punt', the integer 'i' and the array 'x'. Gives the address of the array to the pointer. Sums two to the
pointer and, in that address by dereferencing, changes it's value to 9. Then does the same but using the array 'x' and summing 3 to the
address in there, and in that position, changes it's value to 7. Then uses the pointer as an array and by moving in the address with [], in
the index 1, changes it's value to 11.
When printing this by using a For Loop, from 0 to 4, sums one to the pointer address and dereferences it. So it should point to the values of
the index 0, 1, 2, 3 and 4. In these positions, there is declared '1', '11', '9', '7' and '5' in that order.


--------------------------------------------------------------------------
5.
    int *punt, i;
    int x[5]={1, 2, 3, 4, 5};
    punt=&x[0]+3;
    *(punt-2)=9;
    punt--;
    *(punt)=7 ;
    punt[1]=11 ;
    punt=x;
    for(i=0;i<5;i++)
    printf("%d,", punt[i]));

This code will throw an error when trying to printf because it has two ')' at the end. Apart from that, it should work perfectly.


--------------------------------------------------------------------------
6.
    int v[4] = { 2, 4, 5, 7}, a, *p;
    p = v+2;
    p--;
    a = *p + *(p+1) + *(v+1) + p[2];
    printf("%d", a);
    return 1;

This code will set the pointer 'p' to two addresses more than the array 'v', then it will rest 1 to that pointer. Then, 'a' will 
have the value of '4' (value of *p) + '5' (value of *(p+1)) + '4' (value of *(v+1)) + '7' (value of p[2])), which is 20 and it will
be printed and close the program returning 1.
*/

/*
--------------------------------------------------------------------------------------------------------------------------------------
Analyze the programs given and write all the error with the memory management that you consider are being done. Explain the output 
of the program.

10.
  #include <stdio.h>
  int main() {
    char textoA[30] = "Agarrate Catalina";
    char textoB[30] = "El Cuarteto de Nos";
    char* p = textoA;
    char* q = textoB;
    printf("textoA: %s\ntextoB: %s\n", textoA, textoB);
    while(*p++ = *q++);
    printf("while(*p++ = *q++);\n");
    printf("textoA: %s\ntextoB: %s\n", textoA, textoB);
    return 1;
  }

The output of the program is to print both strings first, then print the mecanism to copy one string into the other (through the While
Loop), and then the last printf should print the same text because in the condition of the while, its replacing all the letters of the
'textoB' into the 'textoA' due to the dereferencing of the pointers. In terms of Memory Management, I don't like the idea of assigning 
the dereference of one pointer to another inside a While Loop, but if it works and it's nothing more complicated than that (to keep it
in only one line), I don't think anything wrong was done.


--------------------------------------------------------------------------
11.
  int main() {
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int* ptr;
    ptr = array;
    printf("array[0]>%d; *ptr: %d\n", array[0], *ptr);
    printf(" array[1]>%d; *(ptr+1): %d\n", array[1], *(ptr+1));
    ptr++;
    printf("ptr++; *ptr: %d\n", *ptr);
    return 1;
  }

The output of the program is to show to value of the first argument in the array, and the dereferencing of the pointer after pointing to the
array (which should be the same, '1'). Then does the same but with the second argument of the array and, in the pointer, adding one (again,
should print the same value, '2'). Then replaces the value of the pointer by adding one (should give the same as the second printf when
dereferencing the pointer+1). Finally prints what it did and the current dereference of the pointer (which should be '2'). If the intention
of the program is to show all the data of the array from it and from the pointer, I would suggest to use a Loop instead of dereferencing it
manually. If it's intended to do what it's doing (just to show that is the same), I don't think there's anything wrong.
*/

/*
--------------------------------------------------------------------------------------------------------------------------------------
For each of the following programs, choose the output that is suppossed to occur, then test it. Why did happen that?

12.
  char* copiar_cadena(char* cad, int longitud) {
    char* a = malloc(sizeof(char) * longitud);
    a = cad;
    return a;
  }

  int main() {
    char a[10] = "hola";
    char* b = copiar_cadena(a, 10);
    printf("%s %s\n", a, b);
    b[0] = 's';
    printf("%s %s\n", a, b);
  }

  Answer: 
  d. hola hola
     hola sola
  I was wrong. The output was "hola hola sola sola" because when 'copying' the array, it was literally copying the addresses where the
  array was pointing when you use '[]', so 'a' and 'b' in main were pointing to the same address when referring to '[]'.


--------------------------------------------------------------------------
13.
  void foo(int* a){
    a = NULL;
  }

  int main() {
    int a[67];
    a[0] = 123;
    printf("%d\n", a[0]);
    foo(a);
    printf("%d\n", a[0]);
  }

  Answer:
  e. Ninguna de las anteriores.

  I think that it should print something like: "123" "Error".
  I was wrong again. The output was "123 123" because even if it's an address passed, in another function, it is a different variable.


--------------------------------------------------------------------------
14.
  int main(){
    char *ptr = "hola mundo";
    ptr[0] = 's';
    printf("%s\n", ptr);
  }

  Answer:
  d. "Ninguna de las anteriores."

  I think is this because the program should throw an error since there is no array created to store the string and the pointer only can
  store addresses.
  I was wrong again but not too much. It was "Segmentation Fault" because the program is trying to insert the data of the string in a memory
  where should be stored an address. This error is very common and almost all errors ocurred when handling addresses are this.

*/