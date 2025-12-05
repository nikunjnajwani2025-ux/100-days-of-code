#include<stdio.h>
int main()
{
int a,i,k;
printf("Enetr the number of terms:");
scanf("%d",&a);
int arr[a];
printf("Enter %d elements:\n",a);
for (i=0;i<a;i=i+1){
scanf("%d",&arr[i]);
}
printf("Enetr the position to rotate to right from k :");
scanf("%d",&k);
k=k%a;
int temp[a];
for (i=0;i<k;i=i+1){
temp[i]=arr[a-k+i];
}
for (i=k;i<a;i=i+1){
temp[i]=arr[i-k];
}
for (i=0;i<a;i=i+1){
arr[i]=temp[i];
}
printf("Array after rotating %d position to right\n",k);
for (i=0;i<a;i=i+1){
printf(" %d",arr[i]);
}
printf("\n");
return 0;
}

/*Enetr the number of terms:5
Enter 5 elements:
12 13 14 15 16
Enetr the position to rotate to right from k :2
Array after rotating 2 position to right
 15 16 12 13 14*/


