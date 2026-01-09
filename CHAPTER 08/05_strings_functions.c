#include <stdio.h>
#include <string.h>

int main(void){
    char st[] = "Happy";
    printf("%d\n", strlen(st)); // strlen()
    
    char source[] = "shree";
    char target[30];
    strcpy(target, source); // strcpy()
    printf("Source: %s Target: %s\n", source, target);

    char a[] = "Hello";
    char b[] = " Shree";
    strcat(a,b); // strcat()
    printf("%s\n", a);
    printf("%s\n", b);

    int abc = strcmp("first", "second"); // Negative value
    int cba = strcmp("second", "first"); // Positive value
    
    printf("%d %d\n", abc, cba);
    return 0;
}
/*
5 --> strlen() gives length of the string
Source: shree Target: shree --> strcpy() copy-paste one into another
Hello Shree --> strcat() joins two strings
 Shree
 -1 1 --> strcmp()
*/

