//Q.Write a program with a structure representing a complex number.

#include <stdio.h>

typedef struct complex_numbers{
    int real_part;
    int imginary_part;
} complex;

int main(void){
    
    complex n = {1, 2};
    printf("The real part is %d & imginary part is %di", n.real_part, n.imginary_part);

    return 0;
}