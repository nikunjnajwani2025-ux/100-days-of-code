#include<stdio.h>
int main()
{
int a,i,sum=0;
printf("Enter the number of terms:");
scanf("%d",&a);
int arr[a];
printf("Enter %d numbers.\n",a);
for (i=0;i<a;i=i+1){
scanf("%d",&arr[i]);
sum=sum+arr[i];
}
printf("The sum of array = %d\n",sum);
return 0;
}


/*Enter the number of terms:7
Enter 7 numbers.
111
112
113
114

115
116
117
The sum of array = 798

Enter the number of terms:5
Enter 5 numbers.
12
114
15
16
1
The sum of array = 158*/

