#include<stdio.h>
int main()
{
int a,i,j,mid;
printf("Entre the number of rows:");
scanf("%d",&a);
if (a%2==0){
printf("Enter odd numbrer.\n");
return 1;
}
mid=(a+1)/2;
for (i=1;i<=mid;i=i+2){
for(j=0;j<i;j=j+1){
printf("*\n");
}
if (i!=a){
printf("\n");
}
}
for (i=mid-2;i>=1;i=i-2){
printf("\n");
for(j=0;j<i;j=j+1){
printf("*\n");
}
}
return 0;
}


/*Entre the number of rows:5
*

*
*
*


*

Entre the number of rows:7
*

*
*
*


*
*   */

