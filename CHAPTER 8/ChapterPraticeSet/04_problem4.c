#include <stdio.h>
//Q.Write a function slice() to slice a string. It should change the original string such that it is now the sliced string. Take ‘m’ and ‘n’ as the start and ending position for slice.

char* slice(char str[], int m, int n) {
    char *ptr1 = &str[m];
    char *ptr2 = &str[n];

    str = ptr1;
    str[n] = '\0';
    return str;
}

int main(void){
    char str[] = "shree kudande";

    printf("%s", slice(str, 0, 8));
    return 0;
}
