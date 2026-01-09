#include <stdio.h>

int main(void){
    int n = 0, i = 1;
    printf("Enter the Number :\n");
    scanf("%d", &n);
    do
    {
        printf("%d\n", i);
        i++;
    } while (i<=n);
    
    return 0;
}

