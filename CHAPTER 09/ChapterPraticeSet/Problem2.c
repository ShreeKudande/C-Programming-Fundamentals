//Q.Write a function ‘sumVector’ which returns the sum of two vectors passed to it. The vectors must be two–dimensional.

#include <stdio.h>

typedef struct vector
{
        int i;
        int j;
}v;

v sum_vector(v v1, v v2) {
    v v3 = {v1.i + v2.i, v1.j + v2.j};
    return v3;
}

int main(void) {

v v1 = {1,2};
v v2 = {5,6};
v v3 = sum_vector(v1, v2);

printf("The value of vector v3 is %di and %dj", v3.i, v3.j);
return 0; 
}    

//The value of vector v3 is 6i and 8j
