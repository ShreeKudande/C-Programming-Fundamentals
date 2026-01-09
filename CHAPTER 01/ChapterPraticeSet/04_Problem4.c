#include <stdio.h>

int main(void){
    //Q.Write a program to calculate simple interest for a set of values representing pricipal, number of years and rate of interest.   
    // Formula : SI = (p*r*t)/100

    float p = 34.1;
    int r = 8;
    int t = 5;
    printf("SI is %f", (p*r*t)/100);
    return 0;
} 