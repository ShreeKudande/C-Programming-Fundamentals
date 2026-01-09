#include <stdio.h>
//Q.Try problem 3 using call by value and verify that it does not change the value of the said variable.
//3. Write a program to change the value of a variable to ten times of its current value.

int change_to_ten_times(int);

int change_to_ten_times(int a) {
    return a * 10; 
}

int main(void){
    int i = 10;
    printf("The value of i is %d", change_to_ten_times(i));

    return 0;
}

//Output :-
//The vlaue of i is 100
