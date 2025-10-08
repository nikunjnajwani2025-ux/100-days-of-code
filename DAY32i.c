#include<stdio.h>
int main()
{
int a,b,i;
printf("Enetr the number of terms in 1 array:");
scanf("%d",&a);
int arr1[a];
printf("Enetr %d elements:\n",a);
for (i=0;i<a;i=i+1){
scanf("%d",&arr1[i]);
}
printf("Enetr the number of terms in 2 array :");
scanf("%d",&b);
int arr2[b];
printf("Enetr %d elements:\n",b);

for (i=0;i<b;i=i+1){
scanf("%d",&arr2[i]);
}
int merged[a+b];
for (i=0;i<a;i=i+1){
merged[i]=arr1[i];
}
for (i=0;i<b;i=i+1){
merged[a+i]=arr2[i];
}
printf("Merged array:\n");
for (i=0;i<a+b;i=i+1){
printf("%d ",merged[i]);
}
printf("\n");
return 0;
}

/*Enetr the number of terms in 1 array:5
Enetr 5 elements:
12 34 56 78 90
Enetr the number of terms in 2 array :4
Enetr 4 elements:
24 68 23 45 67
Merged array:
12 34 56 78 90 24 68 23 45 */




