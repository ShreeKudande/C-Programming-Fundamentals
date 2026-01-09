#include <stdio.h>

int main(void){
    FILE *ptr;
    ptr = fopen("shree.txt", "a");
    // char c = fgetc(ptr); //used to read a character from file.
    // printf("%c", c);

    fputc('c', ptr);
    fclose(ptr);
    return 0;
}