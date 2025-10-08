#include<stdio.h>
int main()
{
int n,i,evenn;
long long product=1
printf("Enter the value of n:");
scanf("%d",&n);
if (n<=0)
{
printf("Please input number greater than zero");
}
else{
for (i=1;i<=n;i=i+1){
evenn=2*i;
product=product*evenn;
}
printf("The product of first %d even number = %lld\n",n,product);
}
return 0;
}

//Enter the value of n:5
//The sum of first 5 odd number = 3840


//Enter the value of n:10
//The sum of first 10 odd number = -579076096

