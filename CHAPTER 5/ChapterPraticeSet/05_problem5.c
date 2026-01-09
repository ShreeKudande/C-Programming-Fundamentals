#include <stdio.h>

int main(void){
    //Q. What will the following line produce in a C program:
    //int a = 4;
    //printf("%d %d %d \n", a, ++a, a++);

    int a = 4;
    printf("%d %d %d \n", a, ++a, a++);
    //Output :- 6 6 4

    //Order of Evaluation :-
    //Left to Right - 4 5 5
    //Right to Left - 6 6 4

    return 0;
}