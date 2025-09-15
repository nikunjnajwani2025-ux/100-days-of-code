#include<stdio.h>
int main()
{
int a,b,c;
printf("Enter three number:");
scanf("%d%d%d",&a,&b,&c);
if (a>=b && a>=c){
printf("The largest is %d\n",a);
}
else if (b>=a && b>c){
printf("The largest is %d\n",b);
}
else
{
printf("The largest is %d\n",c);
}
return 0;
}

//Enter three number:12 34 56
//The largest is 56

//Enter three number:13 6 7
//The largest is 13


