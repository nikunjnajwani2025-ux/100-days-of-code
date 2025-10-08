#include<stdio.h>
int main()
{
int a,oa,digit,sum=0,i,fact;
printf("Enter the number :");
scanf("%d",&a);
oa=a;
while(a>0){
digit=a%10;
fact=1;
for(i=1;i<=digit;i=i+1){
fact=fact*i;
}
sum=sum+fact;
a=a/10;
}
if(sum==oa){
printf("%d is a strong number\n",oa);
}
else{
printf("%d is not a strong number\n",oa);
}
return 0;
}


/*Enter the number :145
145 is a strong number

Enter the number :121
121 is not a strong number*/

