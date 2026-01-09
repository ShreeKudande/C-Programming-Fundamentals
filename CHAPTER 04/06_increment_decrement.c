#include <stdio.h>

int main(void){
    int i = 5;
    printf("The value of i is %d\n", i); //5
    i = i + 5;
    printf("The value of i is %d\n", i); //10
    

    printf("The value of i is %d\n", i++); //10

    printf("The value of i is %d\n", ++i); //12

    // i++ prints i first and then increaments i (Post Increament)
    // ++i increments i first and then prints i

    i +=2; //Same as i = i + 2;
    printf("The value of i is %d\n", i); //14
    

    return 0;
} 