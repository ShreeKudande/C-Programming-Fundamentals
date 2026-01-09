#include <stdio.h>

int main(void){
    char st[30];
    gets(st);
    printf("%s", st);
    puts(st); //Pushes the cursor too the next line
    printf("Hey shree!");
    return 0;
}