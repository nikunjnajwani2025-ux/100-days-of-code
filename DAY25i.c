#include<stdio.h>
int main()
{
int a,i,j,start;
printf("Entre the number of rows:");
scanf("%d",&a);
for (i=1;i<=a;i=i+1){
start=a-i+1;
for (j=start;j<=a;j=j+1){
printf("%d",j);
}
printf("\n");
}
return 0;
}



/*Entre the number of rows:5
5
45
345
2345
12345

Entre the number of rows:4
4
34
234
1234 */


