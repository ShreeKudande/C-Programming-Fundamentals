#include <stdio.h>

int main(void){
    //Q.Calculate income tax paid by an employee to the government as per the slabs mentioned below: 
    // Income Slab Tax
    // 2.5 – 5.0L 5% 
    // 5.0L - 10.0L 20% 
    // Above 10.0L 30%

    //Formula : Tax * (income-250000)
    // 0.05 * (600000-250000) == 17500
    
    int income;
    printf("Enter Your Yearly Income:\n");
    scanf("%d", &income);
    if (income>=250000 && income<=500000)
    {
        printf("You come under 5%% tax bracket\n");
    }
    else if(income>=500000 && income<=1000000)
    {
        printf("You come under 20%% tax bracket\n");
    }
    else if(income>=1000000)
    {
        printf("You come under 30%% tax bracket\n");
    }
    else{
        printf("You don't come under any tax bracket");
    }
    
    return 0;
}