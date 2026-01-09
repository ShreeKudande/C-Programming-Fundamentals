#include <stdio.h>

int main(void){
    //Q.Write a program to print the address of a variable. Use this address to get the value of the variable.

    int i = 2;
    int*ptr = &i;
    printf("The address of i is %p\n", &i); //address of i
    printf("The value at address of i is %d\n", *ptr); //value of i on this address 

    return 0;
}