#include<stdio.h>
int main()
{
int a,b,i,hcf,lcm,min;
printf("Enter first number:");
scanf("%d",&a);
printf("Enter second number:");
scanf("%d",&b);
if (a>b){
min=b;}
else{
min=a;
}
for (i=min;i>=1;i=i-1){
if (a%i==0 && b%i==0){
hcf=i;
break;
}
}
lcm=(a*b)/hcf;
printf("The lcm of %d and %d is %d\n",a,b,lcm);
return 0;
}

/*Enter first number:12
Enter second number:18
The lcm of 12 and 18 is 36

Enter first number:15
Enter second number:45
The lcm of 15 and 45 is 45*/


