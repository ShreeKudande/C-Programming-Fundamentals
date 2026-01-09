//Q.Create an array dynamically capable of storing 5 integers. Now use realloc so that it can now store 10 integers.

#include <stdio.h>
#include <stdlib.h>

int main(void){
    int n = 5;
    int* ptr;
    ptr = (int*) malloc(n*sizeof(int));

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ptr[i]);
    }
    
    printf("The Array is...\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d", ptr[i]);
    }
    printf("\n");

    n = 10;
    ptr = (int*) realloc(ptr, n*sizeof(int));
    
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ptr[i]);
    }
    
    printf("The Array is...\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d", ptr[i]);
    }

    return 0;
}
