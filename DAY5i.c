#include<stdio.h>
#include<math.h>
int main()
{
float pri,rate,time,simple_interest,compound_interest;
printf("Enter thr principle:");
scanf("%f",&pri);
printf("Enter the rate of intrest:");
scanf("%f",&rate);
printf("Enter the time :");
scanf("%f",&time);
simple_interest=(pri*rate*time)/100;
compound_interest=pri*pow((1+rate/100),time)-pri;
printf("The simple_interest = %.2f\n",simple_interest);
printf("The compound_interest=%.2f\n",compound_interest);
return 0;
}

//Enter thr principle:1200000
//Enter the rate of intrest:18
//Enter the time :6
//The simple_interest = 1296000.00
//The compound_interest=2039466.12


//Enter thr principle:145678
//Enter the rate of intrest:15
//Enter the time :3
//The simple_interest = 65555.10
//The compound_interest=75880.02

