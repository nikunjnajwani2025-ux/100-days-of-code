#include<stdio.h>
int main()
{
int year;
printf("Enter the year:");
scanf("%d",&year);
if (year%4==0){
printf("%d is a leap year\n",year);
}
else
{
printf("%d is not a leap year\n",year);
}
return 0;
}

//Enter the year:2020
//2020 is a leap year

//Enter the year:2015
//2015 is not a leap year

