#include<stdio.h>
int main()
{
int a,i,se,found=0;
printf("Enter the number of terms:");
scanf("%d",&a);
int arr[a];
printf("Enter %d elements:\n",a);
for (i=0;i<a;i=i+1){
scanf("%d",&arr[i]);
}
printf("Enter the number for search:");
scanf("%d",&se);
for (i=0;i<a;i=i+1){
if (arr[i]==se){
printf("The number %d found at position %d(index %d)\n",se,i+1,i);
found=1;
break;
}
}
if (!found){
printf("%d not found in array\n",se);
}
return 0;
}


/*Enter the number of terms:5
Enter 5 elements:
10 20 30 40 50
Enter the number for search:40
The number 40 found at position 4(index 3)

Enter the number of terms:4
Enter 4 elements:
12
14
15
16
Enter the number for search:17
17 not found in array*/


