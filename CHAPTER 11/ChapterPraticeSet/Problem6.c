//Q.Attempt problem 4 using calloc().

#include <stdio.h>
#include <stdlib.h>

int main(void){
    int n = 5;
    int* ptr;
    ptr = (int*) calloc(n, sizeof(int));

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
