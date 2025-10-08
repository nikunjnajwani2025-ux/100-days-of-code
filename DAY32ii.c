#include<stdio.h>
int main()
{
int a,i,j,digit,mf=0,mfn,count;
printf("Enter the number of terms:");
scanf("%d",&a);
int arr[a];
int freq[a];
printf("Enter  %d elements:\n",a);
for (i=0;i<a;i=i+1){
scanf("%d",&arr[i]);
freq[i]=-1;
}
for (i=0;i<a;i=i+1){
count=1;
for (j=i+1;j<a;j=j+1){
if (arr[i]==arr[j]){
count=count+1;
freq[j]=0;
}
}
if (freq[i]!=0){
freq[i]=count;
}
}
for (i=0;i<a;i=i+1){
if (freq[i]>mf){
mf=freq[i];
mfn=arr[i];
}
}
printf("Digit that occurs the most is %d\n",mfn);
printf("It occurs %d times\n",mf);
printf("\n");
return 0;
}

/*Enter the number of terms:5
Enter  5 elements:
12 13 14 12 12
Digit that occurs the most is 12
It occurs 3 times


Enter the number of terms:6
Enter  6 elements:
17 15 16 17 18 16
Digit that occurs the most is 17
It occurs 2 times*/




