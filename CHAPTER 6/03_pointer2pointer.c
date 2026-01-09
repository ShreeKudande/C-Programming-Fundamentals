#include <stdio.h>

int main(void){
    int i = 6;
    int* j = &i;
    int** k = &j; //calling pointer2pointer

    printf("The value of i is %d\n", i);
    printf("The value of i is %d\n", *j);
    printf("The value of i is %d\n", *(&i)); 
    printf("The value of i is %d\n\n", **(&j)); 

    printf("The value of i is %d\n", i);
    printf("The address of i in j is %p\n", j);
    printf("The address of j in k is %p\n", k);
    return 0;
}
    
