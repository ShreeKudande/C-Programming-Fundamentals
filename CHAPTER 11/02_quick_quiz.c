#include <stdio.h>
#include <stdlib.h>

int main(void){
    float n = 5;
    float* ptr;
    ptr = (float*) malloc(n * sizeof(float));

    ptr[0] = 3.5465;
    ptr[1] = 35.5465;
    ptr[2] = 73.5465;
    ptr[3] = 23.5465;
    ptr[4] = 13.5465;

    for (int i = 0; i < 5; i++)
    {
        printf("%f\n", ptr[i]);
    }
    
    return 0;
}




