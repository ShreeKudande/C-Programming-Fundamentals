#include <stdio.h>

int main(void){
    /*Q.Calculate the area of a circle and modify the same program to calculate the volume of a cylinder given its radius and height.*/
    //Formula : Area = πr2 , pie = 3.14159

/*
    printf("Enter the Radius :\n");
    int radius;
    scanf("%d", &radius);
    printf("The Area of the Circle is %f", 3.14*radius*radius);
*/
    //Formula : Volume = πr2h
    int radius, height;

    printf("Enter the Radius :\n");
    scanf("%d", &radius);

    printf("Enter the Height:\n");
    scanf("%d", &height);

    printf("The Volume of the cylinder is %f", 3.14*radius*radius*height);
    return 0;

}