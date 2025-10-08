#include<stdio.h>
int main()
{
int a,i,j,tar;
printf("Enter the number of terms:");
scanf("%d",&a);
int arr[a];
printf("Enetr the %d elements:\n",a);
for (i=0;i<a;i=i+1){
scanf("%d",&arr[i]);
}
printf("Enetr the number to search:");
scanf("%d",&tar);
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
int low=0,high=a-1,mid,found=0;
while (low<=high){
mid=low+(high-low)/2;
if (arr[mid]==tar){
printf("Element %d found at index %d\n",tar,mid);
found=1;
break;
}
else if(arr[mid]<tar){
low=mid+1;
}
else {
high=mid-1;
}
}
if (!found){
printf("Element %d not found in the array.\n",tar);
}
return 0;
}

/*Enter the number of terms:5
Enetr the 5 elements:
12 6 18 19 20
Enetr the number to search:20
sorted array:
6 12 18 19 20 
Element 20 found at index 4*/





