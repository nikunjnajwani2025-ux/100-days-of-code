#include<stdio.h>
int main()
{
int n,orgi,rev=0,remain;
printf("Enter en number:");
scanf("%d",&n);
orgi=n;
while(n!=0){
remain=n%10;
rev=rev*10+remain;
n=n/10;
}
if(orgi==rev){
printf("%d is pallendrom\n",orgi);
}
else {
printf("%d is not a pallendrom\n",orgi);
}
return 0;
}

/*Enter en number:123
123 is not a pallendrom

Enter en number:135
135 is not a pallendrom

Enter en number:121
121 is pallendrom*/

