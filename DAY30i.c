#include<stdio.h>
int main()
{
int a,i,ec=0,oc=0;
printf("Enter the number of terms:");
scanf("%d",&a);
int arr[a];
printf("Enter %d elements:\n",a);
for (i=0;i<a;i=i+1){
scanf("%d",&arr[i]);
}
printf("Even number\n");
for (i=0;i<a;i=i+1){
if (arr[i]%2==0){
printf(" %d",arr[i]);
ec=ec+1;
}
}
printf("\n");
printf("Odd numbers\n");
for (i=0;i<a;i=i+1){
if (arr[i]%2!=0){
printf(" %d",arr[i]);
oc=oc+1;
}
}
printf("\n");
printf("Even number count are %d\n",ec);
printf("odd number count are %d\n",oc);
return 0;
}


/*Enter the number of terms:4
Enter 4 elements:
12
13
14
15
Even number
 12 14
Odd numbers
 13 15
Even number count are 2
odd number count are 2

Enter the number of terms:5
Enter 5 elements:
123
124
125
126
127
Even number
 124 126
Odd numbers
 123 125 127
Even number count are 2
odd number count are 3*/



