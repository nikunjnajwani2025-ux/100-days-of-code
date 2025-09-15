#include<stdio.h>
int main()
{
int a,sum=0,i;
printf("Enter the number of terms:");
scanf("%d",&a);
for (i=1;i<=a;i=i+1) {
sum=sum+i;
}
printf("The sum of first n natural numbers = %d\n",sum);
return 0;
}

//Enter the number of terms:18
//The sum of first n natural numbers = 171


//Enter the number of terms:25
//The sum of first n natural numbers = 325




