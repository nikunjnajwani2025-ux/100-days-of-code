#include<stdio.h>
int main()
{
int a,i;
printf("Enter the number of terms:");
scanf("%d",&a);
int arr[a];
printf("Enter %d elements:\n",a);
for (i=0;i<a;i=i+1){
scanf("%d",&arr[i]);
}
printf("The elements of array are.\n");
for (i=0;i<a;i=i+1){
printf(" %d",arr[i]);
}
printf("\n");
return 0;
}

/*Enter the number of terms:5
Enter 5 elements:
12
13
14
15
16
The elements of array are.
 12 13 14 15 16   */

