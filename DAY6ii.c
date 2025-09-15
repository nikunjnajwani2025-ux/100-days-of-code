#include<stdio.h>
int main()
{
int a;
printf("Enter the number of your choise:");
scanf("%d",&a);
if (a>0){
printf("%d is positive number\n",a);
}
else if (a<0)
{
printf("%d is negative number\n",a);
}
else
{
printf("%d is zero\n",a);
}
return 0;
}

//Enter the number of your choise:15
//15 is positive number

//Enter the number of your choise:-4
//-4 is negative number

//Enter the number of your choise:0
//0 is zero



