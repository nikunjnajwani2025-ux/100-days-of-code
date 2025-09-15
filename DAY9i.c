#include<stdio.h>
#include<math.h>
int main()
{
float a,b,c;
float d,root1,root2,realpart,imagpart;
printf("Enter the coeffecient a,b,c:");
scanf("%f%f%f",&a,&b,&c);

d=(b*b)-(4*a*c);
printf("The quadratic equation is %.2fx^2 + %.2fx + %.2f = 0\n",a,b,c);
printf("Discriminant is %.2f\n",d);
if (d>0.0)
{
root1=(-b+sqrtf(d))/(2*a);
root2=(-b-sqrtf(d))/(2*a);
printf("Roots are real and dstinct\n");
printf("Root1 = %.2f\n",root1);
printf("Root2 = %.2f\n",root2);
}
else if (d == 0.0) {
root1 = root2 = -b / (2 * a);
printf("Roots are real and equal\n");
printf("Root = %.2f\n", root1);
}
else
{
realpart=-b/(2*a);
imagpart=sqrtf(-d)/(2*a);
printf("Roots are complex and imaginary\n");
printf("Root1 = %.2f + %.2f\n",realpart,imagpart);
printf("Root2 = %.2f - %.2f\n",realpart,imagpart);
}
return 0;
}


//Enter the coeffecient a,b,c:24 5 6
//The quadratic equation is 24.00x*x + 5.00x + 6.00 = 0
//Discriminant is -551.00
//Roots are complex and imaginary
//Root1 = -0.10 + 0.49
//Root2 = -0.10 - 0.49


//Enter the coeffecient a,b,c:1 -4 4
//The quadratic equation is 1.00x*x + -4.00x + 4.00 = 0
//Discriminant is 0.00
//Roots are real and equal
//Root = 2.00

