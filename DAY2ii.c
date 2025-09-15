#include<stdio.h>
#define PI 3.14
int main()
{
int r;
float area, circumference;
printf("Enter the radius:");
scanf("%d",&r);
area=(float)PI*r*r;
circumference=(float)2*PI*r;
printf("The area of circle of radius %d = %.2f\n",r,area);
printf("The circumference of circle of radius %d = %.2f\n",r,circumference);
return 0;
}

//Enter the radius:15
//The area of circle of radius 15 = 706.50
//The circumference of circle of radius 15 = 94.20

//Enter the radius:18
//The area of circle of radius 18 = 1017.36
//The circumference of circle of radius 18 = 113.04


