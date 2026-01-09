#include <stdio.h>

int main(void){
    //Q.Write a program to sum first ten natural numbers using while loop.

    int i = 1;
    int sum = 0;
    while (i<=10)
    {
        sum +=i;
        i++;
    }
    printf("%d\n", sum);
    
    return 0;
}

