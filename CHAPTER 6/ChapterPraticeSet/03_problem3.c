#include <stdio.h>

void change_to_ten_times(int*);

void change_to_ten_times(int* a) {
    *a = *a * 10;
    //printf("The value of i is %d\n", *a);
    
}

int main(void){
    //Write a program to change the value of a variable to ten times of its current value.
    int i = 10;
    printf("The value of i is %d\n", i);
    change_to_ten_times(&i);
    printf("The value of i is %d\n", i);

    return 0;
}

//Output :-
//The vlaue of i is 100
