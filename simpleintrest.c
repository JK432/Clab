// WRITE A PROGRAME TO CALCULATE SIMPLE INTEREST
#include<stdio.h>
int main()
{

    double amount,rate,time,interest;

    printf("\nEnter the amount\n");
    scanf("%lf",&amount);
    printf("\nEnter the time in years\n");
    scanf("%lf",&time);
    printf("\nEnter the intrest rate\n");
    scanf("%lf",&rate);
    interest = amount*rate*time/100;
    printf("\n Intrest for %.2lf for %.2lf years at the rate of %.2lf is %.3lf \n ",amount,time,rate,interest);


return 0;

}
