#include <stdio.h>

//Q.Write a function to convert Celsius temperature into Fahrenheit.
float changetofahrenheit(float);

float changetofahrenheit(float clesius){
    return (clesius * 1.8) + 32;
}
float main(void){
    float clesius;
    printf("Its %.1f in Fahrenheit", changetofahrenheit(45));
    return 0; 
}

