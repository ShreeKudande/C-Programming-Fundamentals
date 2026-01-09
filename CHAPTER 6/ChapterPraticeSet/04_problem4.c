#include <stdio.h>
//Q.Write a function and pass the value by reference.

void pass_the_value_by_reference(int*);

void pass_the_value_by_reference(int* a) {
    printf("The value of i is %d", *a);
}

int main(void){
    int i = 1;
    pass_the_value_by_reference(&i);
    return 0;
}
