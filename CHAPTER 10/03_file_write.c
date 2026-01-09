#include <stdio.h>

int main(void){
    FILE *ptr;
    // ptr = fopen("shree.txt", "w");
    ptr = fopen("shree.txt", "a");
    int num = 17;
    fprintf(ptr, "%d", num);
    fclose(ptr);
    return 0;
}
