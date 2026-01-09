#include <stdio.h>

int main(void){
    char str1[] = {'a', 'b', 'c','\0'};
    printf("First Character is %c\n", str1[0]);
    printf("Second Character is %c\n", str1[1]);
    printf("Third Character is %c\n\n", str1[2]);
    
    return 0;
}
