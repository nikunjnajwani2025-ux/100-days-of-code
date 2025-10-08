#include<stdio.h>
int main()
{
int a,i;
float sum=0.0,nu,de;
printf("Enter the number of terms:");
scanf("%d",&a);
for (i=1;i<=a;i=i+1){
nu=2*i;
de=4*(i-1)+3;
sum=sum+nu/de;
}
printf("sum of series of %d is %.2f\n",a,sum);
return 0;
}



/*Enter the number of terms:3
sum of series of 3 is 1.78

Enter the number of terms:6
sum of series of 6 is 3.36*/
