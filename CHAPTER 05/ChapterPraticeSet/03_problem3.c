#include <stdio.h>

    float gra_for(float);

    float gra_for(float m){
        return m*9.8;
    }

int main(void){
    //Q.Write a function to calculate force of attraction on a body of mass ‘m’ exerted by earth. Consider g = 9.8m/s2.

    float m;
    printf("Force : %.2f N", gra_for(45));

    return 0;
}