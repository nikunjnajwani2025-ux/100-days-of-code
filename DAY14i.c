#include<stdio.h>
int main()
{
int n,i,sum=0,oddn;
printf("Enter the value of n:");
scanf("%d",&n);
if (n<=0)
{
printf("Please input number greater than zero");
}
else{
for (i=1;i<=n;i=i+1){
oddn=2*i-1;
sum=sum+oddn;
}
printf("The sum of first %d odd number = %d\n",n,sum);
}
return 0;
}

//Enter the value of n:5
//The sum of first 5 odd number = 25


//Enter the value of n:6
//The sum of first 6 odd number = 36

