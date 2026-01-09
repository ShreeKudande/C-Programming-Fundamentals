#include <stdio.h>

int main(void)
{
    char char_ptr = 'p';
    char* i = &char_ptr; //i is a pointer pointing to char_ptr (i is a character pointer)

    int int_ptr = 72 ;
    int* j = &int_ptr; //j is a pointer pointing to int_ptr (j is a integer pointer)

    float float_ptr = 0.5;
    float* k = &float_ptr; //k is a pointer pointing to float_ptr (k is a floating pointer)

    printf("The address of char_ptr is %p\n", &char_ptr);
    printf("The address of int_ptr is %p\n", &int_ptr);
    printf("The address of float_ptr is %p\n\n", &float_ptr);

    printf("The address of char_ptr is %p\n", i);
    printf("The address of int_ptr is %p\n", j);
    printf("The address of float_ptr is %p\n", k);
    return 0;
}