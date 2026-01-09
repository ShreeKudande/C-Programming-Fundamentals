#include <stdio.h>

int main(void){
    //Q.Write a program to convert Celsius(Centigrade degrees temperature to Fahrenheit.)
    //Formula : F = 1.8*C+32

    int c;
    printf("Enter the Celsius:\n");
    scanf("%d", &c);
    printf("In Fahrenheit %f", 1.8*c+32);
    return 0;
}