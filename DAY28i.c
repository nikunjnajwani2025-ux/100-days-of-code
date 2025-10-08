#include<stdio.h>
int main()
{
int a,i,j;
printf("Enter the number of terms:");
scanf("%d",&a);
for (i=2;i<=a;i=i+1){
for (j=2;j*j<=i;j=j+1){
if (i%j==0){
break;
}
}
if (j*j>i){
printf(" %d",i);
}
}
printf("\n");
return 0;
}

/*Enter the number of terms:20
 2 3 5 7 11 13 17 19

Enter the number of terms:30
 2 3 5 7 11 13 17 19 23 29*/

