#include <stdio.h>
//Q.Write a program to take string as an input from the user using %c and %s confirm that the strings are equal.
int main(void){
    char str[6];
    //scanf("%s", str);
    for (int i = 0; i < 5; i++)
    {
        scanf("%c", &str[i]);
        fflush(stdin); //It's a non-standard command that attempts to clear any leftover, unread characters (like the 'Enter' key) from the keyboard's input buffer.
    }
    str[5] = '\0';
    
    printf("%s", str);
    return 0;
}
