#include<stdio.h>
int main()
{
int n,i,oddn;
long long product=1;
printf("Enter the value of n:");
scanf("%d",&n);
if (n<=0)
{
printf("Please input number greater than zero");
}
else{
for (i=1;i<=n;i=i+1){
oddn=2*i-1;
product=product*oddn;
}
printf("The product of first %d odd number = %lld\n",n,product);
}
return 0;
}


/*Enter the value of n:12
The product of first 12 odd number = 316234143225

Enter the value of n:15
The product of first 15 odd number = 6190283353629375*/

