#include<stdio.h>
int main()
{
int a,i,j,pos;
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
printf("Enetr the position where to delete at (1 to %d):",a+1);
scanf("%d",&pos);
for (i=pos-1;i<a-1;i=i+1){
arr[i]=arr[i+1];
}
a=a-1;
printf("Array after deletion:\n");
for (i=0;i<a;i=i+1){
printf("%d ",arr[i]);
}
printf("\n");
return 0;
}

/*Enter the number of terms:5
Enetr the 5 elements:
12 15 17 18 9
sorted array:
9 12 15 17 18 
Enetr the position where to delete at (1 to 6):4
Array after deletion:
9 12 15 18 */




