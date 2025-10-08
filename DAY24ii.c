#include<stdio.h>
int main()
{
int a,i,j;
printf("Entre the number of rows:");
scanf("%d",&a);
for (i=1;i<=a;i=i+1){
for (j=1;j<=i;j=j+1){
printf("%d",j);
}
printf("\n");
}
return 0;
}

/*Entre the number of rows:5
1
12
123
1234
12345

Entre the number of rows:6
1
12
123
1234
12345
123456*/

