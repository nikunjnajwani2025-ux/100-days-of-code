#include<stdio.h>
int main()
{
int a,i,pc=0,nc=0,zc=0;
printf("Enter the number of terms:");
scanf("%d",&a);
int arr[a];
printf("Enter %d elements:\n",a);
for (i=0;i<a;i=i+1){
scanf("%d",&arr[i]);
}
printf("positive number\n");
for (i=0;i<a;i=i+1){
if (arr[i]>0){
printf(" %d",arr[i]);
pc=pc+1;
}
}
printf("\n");
printf("negative numbers\n");
for (i=0;i<a;i=i+1){
if (arr[i]<0){
printf(" %d",arr[i]);
nc=nc+1;
}
}
printf("\n");
printf("zero:\n");
for (i=0;i<a;i=i+1){
if (arr[i]==0)
{
printf(" %d",arr[i]);
zc=zc+1;
}
}
printf("\n");
printf("Count of positive numbers are %d\n",pc);
printf("Count of negative number are %d\n",nc);
printf("Count of zero are %d\n",zc);
return 0;
}

/*Enter the number of terms:10
Enter 10 elements:
12 13 14 -8 -7 -6 0 0 67 87
positive number
 12 13 14 67 87
negative numbers
 -8 -7 -6
zero:
0 0
Count of positive numbers are 5
Count of negative number are 3
Count of zero are 2*/




