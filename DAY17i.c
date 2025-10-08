#include<stdio.h>
#include<math.h>
int main()
{
int a,orgi,remain,n=0,result=0;
printf("Enter a number:");
scanf("%d",&a);
orgi=a;
while (orgi!=0){
orgi=orgi/10;
n=n+1;
}
orgi=a;
while ( orgi!=0){
remain=orgi%10;
result=result+pow(remain,n);
orgi=orgi/10;
}
if(result==a){
printf("%d is armstrong number\n",a);
}
else {
printf("%d is not an armstrong number\n",a);
}
return 0;
}

/*Enter a number:153
153 is armstrong number

Enter a number:9474 
9474 is armstrong number

Enter a number:121
121 is not an armstrong number*/


