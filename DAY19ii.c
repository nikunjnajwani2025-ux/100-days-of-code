#include<stdio.h>
int main()
{
int a,digit,sum=0;
printf("Enter a number:");
scanf("%d",&a);
while (a!=0){
digit=a%10;
sum=sum+digit;
a=a/10;
}
printf("Sum of digits = %d\n",sum);
return 0;
}

/*Enter a number:123
Sum of digits = 6

Enter a number:1567
Sum of digits = 19*/

