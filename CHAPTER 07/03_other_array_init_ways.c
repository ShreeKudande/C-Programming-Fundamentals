#include <stdio.h>

int main(void){
    int cgpa[3] = {9, 8, 8};
    for (int i = 0; i < 3; i++)
    {
        printf("The cgpa of %d is %d \n", i, cgpa[i]);
    }
    
    return 0;
}