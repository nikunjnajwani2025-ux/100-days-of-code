#include<stdio.h>
int main()
{
float l,b,area,perimeter;
printf("Enter the length:");
scanf("%f",&l);
printf("Enter the breadth:");
scanf("%f",&b);
perimeter=2*(l+b);
area=l*b;
printf("The area of rectangle of length %f and breadth %f = %.2f\n",l,b,area);
printf("The perimeter of rectangle of length %f and breadth %f = %.2f\n",l,b,perimeter);
return 0;
}


//Enter the length:12
//Enter the breadth:10
//The area of rectangle of length 12.000000 and breadth 10.000000 = 120.00
//The perimeter of rectangle of length 12.000000 and breadth 10.000000 = 44.00

//Enter the length:15
//Enter the breadth:9
//The area of rectangle of length 15.000000 and breadth 9.000000 = 135.00
//The perimeter of rectangle of length 15.000000 and breadth 9.000000 = 48.00



