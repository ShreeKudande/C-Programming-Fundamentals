#include <stdio.h>

int main(void){
    // 4. Write a program to find whether a year entered by the user is a leap year or not. Take year as an input from the user.

    //A leap year is a year that is used to keep our calendar year synchronized with the astronomical year. The Earth's orbit around the Sun takes approximately 365.25 days, so a standard year is 365 days. The extra 0.25 days accumulate over time, and to correct this discrepancy, an extra day is added to the calendar every four years. This extra day is added to the month of February, which then has 29 days instead of 28

    int year;
    printf("Enter year: \n");
    scanf("%d", &year);

    if ((year%4==0 && year%100!=0) || year%400==0)
    {
        printf("This is a Leap Year");
    }
    else{
        printf("This is not a Leap Year");
    }
    
    return 0;
}