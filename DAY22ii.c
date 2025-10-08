#include<stdio.h>
int main()
{
int a,i;
float sum=0.0,nu,de;
printf("Enter the number of terms:");
scanf("%d",&a);
for (i=1;i<=a;i=i+1){
nu=2*i-1;
de=2*i;
sum=sum+nu/de;
}
printf("sum of series of %d is %.2f\n",a,sum);
return 0;
}

/*Enter the number of terms:5
sum of series of 5 is 3.86


Enter the number of terms:8
sum of series of 8 is 6.64*/
