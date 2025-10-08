#include<stdio.h>
int main()
{
int a,i,j;
printf("Entre the number of rows:");
scanf("%d",&a);
for (i=1;i<=a;i=i+1){
for (j=1;j<=a;j=j+1){
printf("*");
}
printf("\n");
}
return 0;
}



/*Entre the number of rows:6
******
******
******
******
******
******

Entre the number of rows:5
*****
*****
*****
*****
***** */

