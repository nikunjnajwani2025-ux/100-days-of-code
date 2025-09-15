#include<stdio.h>
int main()
{
int total_seconds,hours,minutes,seconds;
printf("Enter the total number of seconds:");
scanf("%d",&total_seconds);
hours=total_seconds/3600;
minutes=(total_seconds%3600)/60;
seconds=total_seconds%60;
printf("The time is %d:%d:%d\n",hours,minutes,seconds);
return 0;
}

//Enter the total number of seconds:1234567
//The time is 342:56:7


//Enter the total number of seconds:145678
//The time is 40:27:58



