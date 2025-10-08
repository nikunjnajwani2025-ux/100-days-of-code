#include<stdio.h>
int main()
{
int a,b,i,j,pos;
printf("Enter the number of terms:");
scanf("%d",&a);
int arr[a+1];
printf("Enetr the %d elements:\n",a);
for (i=0;i<a;i=i+1){
scanf("%d",&arr[i]);
}
for (i=0;i<a-1;i=i+1){
for (j=0;j<a-1-i;j=j+1){
if (arr[j]>arr[j+1]){
int temp;
temp=arr[j];
arr[j]=arr[j+1];
arr[j+1]=temp;
}
}
}
printf("sorted array:\n");
for (i=0;i<a;i=i+1){
printf("%d ",arr[i]);
}
printf("\n");
printf("Enetr the number to insert:");
scanf("%d",&b);
printf("\n");
printf("Enetr the position where to insert at (1 to %d):",a+1);
scanf("%d",&pos);
for (i=a;i>=pos;i=i-1){
arr[i]=arr[i-1];
}
arr[pos-1]=b;
a=a+1;
printf("Array after inserion:\n");
for (i=0;i<a;i=i+1){
printf("%d ",arr[i]);
}
printf("\n");
return 0;
}
/*Enter the number of terms:5
Enetr the 5 elements:
12 15 16 8 19
sorted array:
8 12 15 16 19 
Enetr the number to insert:10

Enetr the position where to insert at (1 to 6):1
Array after inserion:
10 8 12 15 16 19 */



