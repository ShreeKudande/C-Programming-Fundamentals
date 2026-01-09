// #include <stdio.h>

// int sum();

// int sum(int a, int b){
//     //printf("Sum of %d and %d is: %d ", a, b, a + b);
//     return a + b;
// }

// int main(void){ 

//     int n = sum(5, 10);
//     printf("Sum is: %d\n", n);
    
//     return 0;
// }

#include <stdio.h>

//R. If the passed variable is changed inside the function, the function call doesn’t change the value in the calling function.

int change(int a) {
a = 77; // Misnomer
printf("Value of a inside change function is: %d\n", a); //Prints a is 77
return 0;
}

int main(void){
    int b=22;
    change(b); // The value of b remains 22
    printf("Value of b is: %d\n", b); //Prints b is 22
    return 0;
}

//This happens because a copy of ‘b’ is passed to the change function, and any changes made to ‘a’ inside the function do not affect the original variable ‘b’ in main.
