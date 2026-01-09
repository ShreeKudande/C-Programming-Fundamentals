//Q.Create a structure representing a bank account of a customer. What fields did you use and why?
#include <stdio.h>

typedef struct bank_account
{
    char customerName[100];
    int accountNumber;
    char accountType[100];
    float balance;
    char currency[100];
    char accountStatus[100];
}account;

int main(void){

}