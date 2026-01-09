#include <stdio.h>
#include <stdlib.h>

int main(void){
    int n;
    int* ptr;
    scanf("%d", &n);
    ptr = (int*) malloc(n * sizeof(int));
    // int arr[n]; //Not allowed in c too doo dinamic memory allocation like this... 
    ptr[0] = 3;
    ptr[1] = 6;

    printf("%d", ptr[0]);
    return 0;

    return 0;
}



