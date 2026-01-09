#include <stdio.h>
/*
Q.If S[3] is a 1-D array of integers then *(S+3) refers to the third element:
(i) True.
(ii) False.
(iii) Depends.
*/
int main(void){
    int s[3] = {1, 2, 3};
    printf("%d", *(s+4));

    return 0;
}
//Ans. False
//Because the array is just 3 elements, adding 3 would point out too the 4th element which does not exist, which will result in garbage value.
