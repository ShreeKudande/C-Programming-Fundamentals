#include <stdio.h>

void swap(int* , int*);

void swap(int* a , int* b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main(void){
    int a = 4, b = 6;
    swap(&a, &b);
    printf("The value of a is %d and the value of b is %d", a, b);
    return 0;
}
//Output :-
//The value of a is 6 and the value of b is 4

// #include <stdio.h>

// void swap(int* , int*);

// void swap(int* a , int* b) {
//     int temp;
//     temp = *a;
//     *b = *a;
//     temp = *b;
// }

// int main(void){
//     int a = 4, b = 6;
//     swap(&a, &b);
//     printf("The value of a is %d and the value of b is %d", a, b);
//     return 0;
// }
//Output :-
//The value of a is 4 and the value of b is 4
