//Q.Write problem 5’s structure using ‘typedef’ keywords. 
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