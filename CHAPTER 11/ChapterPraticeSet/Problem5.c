//Q.Create an array of multiplication table of 7 upto 10 (7 x 10 = 70). Use realloc to make it store 15 number (from 7 x 1 to 7 x 15).

//Q.Create an array dynamically capable of storing 5 integers. Now use realloc so that it can now store 10 integers.

#include <stdio.h>
#include <stdlib.h>

int main(void){
    int n = 10;
    int* ptr;
    ptr = (int*) malloc(n*sizeof(int));

    for (int i = 0; i < n; i++)
    {
        ptr[i] = 7*(i+1);
    }
    
    for (int i = 0; i < n; i++)
    {
        printf("7 X %d = %d\n", i + 1, ptr[i]);
    }
    printf("\n");

    n = 15;
    for (int i = 0; i < n; i++)
    {
        ptr[i] = 7*(i+1);
    }
    
    for (int i = 0; i < n; i++)
    {
        printf("7 X %d = %d\n", i + 1, ptr[i]);
    }
    printf("\n");

    return 0;
}
