#include<stdio.h>
int main()
{
float a,b,c;
printf("Enter first side of triangle:");
scanf("%f",&a);
printf("Enter second side of triangle:");
scanf("%f",&b);
printf("Enter third side of triangle:");
scanf("%f",&c);
if (a+b>c && a+c>b && b+c>a){
if(a==b && b==c)
{printf("The triangle is eqilateral triangle\n");
}
else if (a==b || b==c || a==c){
printf("The triangle is isosceles triangle\n");
}
else{
printf("The triangle is scalene triangle\n");
}
}
else{
printf("The given side do not form triangle\n");
}
return 0;
}

//Enter first side of triangle:2   
//Enter second side of triangle:3
//Enter third side of triangle:4
//The triangle is scalene triangle

//Enter first side of triangle:6
//Enter second side of triangle:6
//Enter third side of triangle:6
//The triangle is eqilateral triangle


