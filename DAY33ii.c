#include<stdio.h>
int main()
{
int a,i,j,b,pos;
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
pos=a;
for (i=0;i<a;i=i+1){
if (arr[i]>b){
pos=i;
break;
}
}
for (i=a;i>pos;i=i-1){
arr[i]=arr[i-1];
}
arr[pos]=b;
a=a+1;
printf("Array after inserion:\n");
for (i=0;i<a;i=i+1){
printf("%d ",arr[i]);
}
printf("\n");
return 0;
}
/*Enter the number of terms:4
Enetr the 4 elements:
12 13 14 16
sorted array:
12 13 14 16 
Enetr the number to insert:15
Array after inserion:
12 13 14 15 16 

Enter the number of terms:5
Enetr the 5 elements:
12 17 19 20 7 
sorted array:
7 12 17 19 20 
Enetr the number to insert:14
Array after inserion:
7 12 14 17 19 20 */




