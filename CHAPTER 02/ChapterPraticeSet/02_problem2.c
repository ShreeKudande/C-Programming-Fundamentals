#include <stdio.h>

int main(void){
    //Q. What data type will 3.0/8-2 return?
    float a = 3.0;
    int b = 8;
    int c = 2;
    printf("%f", a/b-c);
    //Will return float
    return 0;
}