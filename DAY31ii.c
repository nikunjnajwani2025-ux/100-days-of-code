#include<stdio.h>
int main()
{
int a,i,temp;
printf("Enter the number of terms:");
scanf("%d",&a);
int arr[a];
printf("Enetr %d elements:\n",a);
for (i=0;i<a;i=i+1){
scanf("%d",&arr[i]);
}
int start=0,end=a-1;
while (start<end){
temp=arr[start];
arr[start]=arr[end];
arr[end]=temp;
start=start+1;
end=end-1;
}
printf("Revrsed array.\n");
for (i=0;i<a;i=i+1){
printf("%d ",arr[i]);
}
printf("\n");
return 0;
}


/*
Enter the number of terms:4
Enetr 4 elements:
10 20 30 40 
Revrsed array.
40 30 20 10 

Enter the number of terms:6
Enetr 6 elements:
1 2 3 4 5 6 
Revrsed array.
6 5 4 3 2 1 */

