#include <stdio.h>

int main() {

  int* punt, i;
  int x[]={1, 2, 3, 4, 5};
  punt = x;
  *(punt+2) = 9;
  *(x+3) = 7;
  punt[1]=11;
  for(i=0; i<5; i++) {
    printf("%d", *(punt+i));
  }

  return 0;
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
*/