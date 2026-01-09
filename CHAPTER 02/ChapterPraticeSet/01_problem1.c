#include <stdio.h>

int main(void){
    //Q. Which of the following is invalid in C?
    int a = 1; int b = a;
    int v = 3*3;
    char dt = '21 dec 2020'; // this in invalid, because char takes only one character
    printf("%d %d %d", a, b, dt);
    return 0;
}