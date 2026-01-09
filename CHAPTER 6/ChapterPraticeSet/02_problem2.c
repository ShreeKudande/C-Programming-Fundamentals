#include <stdio.h>

int returning_5(int* ptr) {
    printf("The value of ptr is %p\n", ptr);
    printf("The value at ptr is %d\n", *ptr);
    return 5;
}

int main(void){
    //Write a program having a variable ‘i’. Print the address of ‘i’. Pass this variable to a function and print its address. Are these addresses same? Why?
    
    int i = 2;
    int* ptr = &i;
    printf("The address of i is %p\n", &i);
    returning_5(ptr);
    return 0;
}

/*
OutPut :-
The address of i is 0061FF18
The value of ptr is 0061FF18
The value at ptr is 2

Yes, they are the same.

You printed the address of `i` in `main`.

Then, you passed that **exact same address** to the function, and the function printed the address it received. You're just printing the same value in two different places.
*/
