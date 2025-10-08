#include<stdio.h>
int main()
{
int a,i,j;
printf("Enter the number of rows:");
scanf("%d",&a);
for (i=0;i<a;i=i+1){
for (j=0;j<a-i-1;j=j+1){
printf(" ");
}
for (j=0;j<2*i+1;j=j+1){
printf("*");
}
printf("\n");
}
for (i=a-2;i>=0;i=i-1){
for (j=0;j<a-i-1;j=j+1){
printf(" ");
}
for (j=0;j<2*i+1;j=j+1){
printf("*");
}
printf("\n");
}
return 0;
}



/*Enter the number of rows:6
     *
    ***
   *****
  *******
 *********
***********
 *********
  *******
   *****
    ***
     *

Enter the number of rows:5
    *
   ***
  *****
 *******
*********
 *******
  *****
   ***
    *           */

