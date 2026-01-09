//Q.Write a program to read three integers from a file.

#include <stdio.h>

int main(void){
    FILE *ptr;
    ptr = fopen("P1.txt", "r");
    // int num;

    // fscanf(ptr, "%d", &num);
    // printf("%d\n", num);

    // fscanf(ptr, "%d", &num);
    // printf("%d\n", num);

    // fscanf(ptr, "%d", &num);
    // printf("%d\n", num);

    int num1, num2, num3;
    fscanf(ptr, "%d %d %d",&num1, &num2, &num3);
    printf("%d %d %d", num1, num2, num3);

    fclose(ptr);
    return 0;
}
