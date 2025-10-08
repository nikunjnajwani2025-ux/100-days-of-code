#include<stdio.h>
int main()
{
int a,i,sum=0;
printf("Enter a number:");
scanf("%d",&a);
if (a<=0){
printf("Enter a positive number.\n");
return 1;
}
for (i=1;i<a;i=i+1){
if (a%i==0){
sum=sum+i;
}
}
if (sum==a){
printf("%d is a perfect number\n",a);
}
else{
printf("%d is not a perfect number\n",a);
}
return 0;
}

/*Enter a number:123
123 is not a perfect number

Enter a number:121
121 is not a perfect number

Enter a number:89
89 is not a perfect number*/



