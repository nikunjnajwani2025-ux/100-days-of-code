#include<stdio.h>
int main()
{
int a,i;
printf("Enter a number:");
scanf("%d",&a);
if(a<=1){
printf("%d is not a prinme number please enter positive number\n",a);
}
else {
for(i=2;i<a;i=i+1){
if (a%i==0){
printf("%d is not a prime number\n",a);
break;
}
}
if (i==a) {
printf("%d is prime number\n",a);
}
}

return 0;
}

/*Enter a number:7
7 is prime number

Enter a number:56
56 is not a prime number*/

