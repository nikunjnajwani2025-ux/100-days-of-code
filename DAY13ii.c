#include<stdio.h>
int main()
{
int n,i;
printf("Enter the value of n:");
scanf("%d",&n);
if (n<1){
printf("Please enter the number greater than zero");
}
else if(n>=1){
for (i=1;i<=n;i=i+1){
printf("%d\n",i);
}
printf("\n");
}
return 0;
}

//Enter the value of n:5
//1
//2
//3
//4
//5

