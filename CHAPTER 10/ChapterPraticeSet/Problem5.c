//Q.Write a program to modify a file containing an integer to double its value.

#include <stdio.h>

int main(void){
    
    FILE* ptr;

    ptr = fopen("P5.txt", "r");
    int temp;
    fscanf(ptr, "%d", &temp);
    fclose(ptr);

    ptr = fopen("P5.txt", "w");
    fprintf(ptr, "%d", temp*2);
    fclose(ptr);

    return 0;
}

