#include<stdio.h>
int main()
{
int n,rev=0,remain,orgi;
printf("Enter the value of n:");
scanf("%d",&n);
orgi=n;
while (n!=0){
remain=n%10;
rev=rev*10+remain;
n=n/10;
}
printf("The reverse of %d = %d\n",orgi,rev);
return 0;
}

/*Enter the value of n:145
The reverse of 145 = 541

Enter the value of n:567
The reverse of 567 = 765*/

