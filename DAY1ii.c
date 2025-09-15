#include<stdio.h>
int main()
{
float a,b,add,diff,prod,div;
printf("Enter two number :");
scanf("%f%f",&a,&b);
add=a+b;
diff=a-b;
prod=a*b;
if (b==0){
printf("error");
}
else
{
div=a/b;
}
printf("The addition of %f and %f = %.2f\n",a,b,add);
printf("The subraction of %f and %f = %.2f\n",a,b,diff);
printf("The product of %f and %f = %.2f\n",a,b,prod);
printf("The division of %f and %f = %.2f\n",a,b,div);
return 0;
}
//Enter two number :12 4
//The addition of 12.000000 and 4.000000 = 16.00
//The subraction of 12.000000 and 4.000000 = 8.00
//The product of 12.000000 and 4.000000 = 48.00
//The division of 12.000000 and 4.000000 = 3.00

//Enter two number :15 4
//The addition of 15.000000 and 4.000000 = 19.00
//The subraction of 15.000000 and 4.000000 = 11.00
//The product of 15.000000 and 4.000000 = 60.00
//The division of 15.000000 and 4.000000 = 3.75







