#include <stdio.h>

int main(void){
    int a=1; int b=1;
    printf("The value of a and b is %d\n", a&&b);
    printf("The value of a or b is %d\n", a||b);
    printf("The value of not(a) is %d\n", !a);
    printf("The value of a and not(b) is %d\n", a&&!b);

    //Use of logical Operator's
    if(a && b) {
        printf("both are true\n");
    }
    
    //is same as writing...
    if(a){
        if(b) {
        printf("both are true\n");
        }
    }

    return 0;
}
//Output :
// The value of a and b is 0
// The value of a or b is 1
// The value of not(a) is 0
// The value of a and not(b) is 1

