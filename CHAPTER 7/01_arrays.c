#include <stdio.h>

int main(void){
    int marks[90]; // Reserve space to store 90 integers
/*
    Marks [ 45 95 ? ? ? ....n  ]
    Marks [ 0  1  2 3 4 ....89 ]
    marks[0] = 45;
    marks[1] = 95;
*/
    // We can go all the way till marks[89]
    printf("Marks 0 and Marks 1 is %d %d", marks[0], marks[1]);
    return 0;
}
