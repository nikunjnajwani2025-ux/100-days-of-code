#include<stdio.h>
int main()
{
int a,b,i,hcf,min;
printf("Enter first number:");
scanf("%d",&a);
printf("Enter second number:");
scanf("%d",&b);
if (a>b){
min=b;}
else{
min=a;
}
for (i=1;i<=min;i=i+1){
if (a%i==0 && b%i==0){
hcf=i;
}
}
printf("The hcf of %d and %d is %d\n",a,b,hcf);
return 0;
}

/*Enter first number:12	 
Enter second number:18
The hcf of 12 and 18 is 6

Enter first number:4
Enter second number:8
The hcf of 4 and 8 is 4*/


