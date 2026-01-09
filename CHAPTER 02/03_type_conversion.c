#include <stdio.h>

int main(void){
    // int int = int
    // float int = float
    // float float = float
    float a = 9.0;
    int b = 2;
    float c = a/b;
    printf("The value of a/b is %f\n", c);

    int d = 6.7; // the value of d is demoted to 6 because of type int declaration
    float p = 8; // Here Promoted to 8.0

    printf("The value of d is %d\n", d);
    printf("The value of p is %f\n", p);

    return 0;
}