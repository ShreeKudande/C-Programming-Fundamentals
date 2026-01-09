#include <stdio.h>
//Q.Write your own version of strlen function from <string.h>

int strlen(char str[]) {
    int i = 0;
    char c = str[i];
    while (c != '\0')
    {
        c = str[i];
        i++;
    }
    return i-1;

}

int main() {
    char str[] = "Shri";
    printf("%d", strlen(str));
    
    return 0;
}
