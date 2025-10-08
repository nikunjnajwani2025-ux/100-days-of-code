#include<stdio.h>
#include<math.h>
int main()
{
int a,temp,digit=0,fd,ld,mp,na;
printf("Enter the number of ur choice:");
scanf("%d",&a);
if (a>=0 && a<=9){
printf("Please enter three digit number.\n");
return 1;
}
temp=a;
while (temp>=10)
{
temp=temp/10;
digit=digit+1;
}
fd=temp;
ld=a%10;
mp=(a%(int)pow(10,digit))/10;
na=ld*(int)pow(10,digit)+mp*10+fd;
printf("Number after swaping first and last digit is %d\n",na);
return 0;
}

/*Enter the number of ur choice:8
Please enter three digit number.

Enter the number of ur choice:2345
Number after swaping first and last digit is 5342*/

