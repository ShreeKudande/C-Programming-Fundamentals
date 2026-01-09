#include <stdio.h>

//What is Factorail - the product of a positive integer and all the integers below it; e.g. factorial four ( 4! ) is equal to 24.

//Factorial(5) = 1 X 2 X 3 X 4 X 5
//Factorial(4) = 1 X 2 X 3 X 4
//Factorial(3) = 1 X 2 X 3
//Factorial(n) = 1 X 2 X ....X n-1 X n
//Factorial(n-1) = 1 X 2 X ....X n-1

//Factorial(n) = Factorial(n-1) X n 

int factorial(int);

int factorial(int a) {
    if (a <= 1) //Base condition
        return 1;
    return a * factorial(a - 1);
    //Short answer: you need a base condition so the recursion stops. Without it the function keeps calling itself forever (until the program crashes or produces undefined/garbage results).
}

int main(void){
    int a = 5;
    printf("The factorial of %d is %d\n", a, factorial(a));
    return 0;
}