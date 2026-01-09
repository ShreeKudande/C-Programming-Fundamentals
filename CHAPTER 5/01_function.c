#include <stdio.h>

//Function Prototype
int sum(int, int);

//Function Definition
int sum(int x, int y){
    printf("The sum of %d and %d is %d\n", x, y, x + y);
    return x + y;
}


int main(void){
    
    int a = 1;
    int b = 2; 

    sum(a, b); //Function Call

//Without Funciton - 
//     int a = 1;
//     int b = 2;

//     int c = a + b;
//     printf("The sum of %d and %d is %d\n", a, b, c);

//     int a1 = 5;
//     int b1 = 5;

//     int c1 = a1 + b1;
//     printf("The sum of %d and %d is %d\n", a1, b1, c1);

//     int a2 = 4;
//     int b2 = 8;

//     int c2 = a2 + b2;
//     printf("The sum of %d and %d is %d\n", a2, b2, c2);

//Sometimes our program gets bigger in size and it's not possible for a programmer to track which piece of code is doing what.
//Function is a way to break our code into chunks so that it is possible for a programmer to reuse them.
return 0;

}