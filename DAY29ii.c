#include<stdio.h>
int main()
{
int a,i,max,min;
printf("Enter the number of terms:");
scanf("%d",&a);
int arr[a];
printf("Enter %d elements:\n",a);
for (i=0;i<a;i=i+1){
scanf("%d",&arr[i]);
}
max=arr[0];
min=arr[0];
for (i=1;i<a;i=i+1){
if (arr[i]>max){
max=arr[i];
}
if (arr[i]<min){
min=arr[i];
}
}
printf("Maximunt number from array is %d\n",max);
printf("Minimum number from array is %d\n",min);
return 0;
}

/*Enter the number of terms:5
Enter 5 elements:
14
23
25
26
27
Maximunt number from array is 27
Minimum number from array is 14

Enter the number of terms:6
Enter 6 elements:
134
123
156
147
188
198
Maximunt number from array is 198
Minimum number from array is 123*/

