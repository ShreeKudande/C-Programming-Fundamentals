#include <stdio.h>
// Q.Write your own version of strcpy function from <string.h>

void cp(char a[], char b[]) {
    int i = 0;

    // Loop WHILE the character in 'a' is NOT the end-of-string character
    while (a[i] != '\0') {
        b[i] = a[i]; // Copy the character
        i++;         // Move to the next index
    }
    
    // After the loop, add the end-of-string character to 'b'
    b[i] = '\0';
}

int main(void)
{
    char strfull[] = "shree kudande";
    char strempty[100];
    cp(strfull, strempty);
    printf("%s %s", strfull, strempty);
    return 0;
}

