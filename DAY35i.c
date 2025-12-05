#include<stdio.h>
int main()
{
int n,i;
printf("Enetr the number of terms:");
scanf("%d",&n);
int arr[n];
printf("Enter %d elements:\n",n);
for (i=0;i<n;i=i+1){
scanf("%d",&arr[i]);
}
int st,sn;
if (arr[0]>arr[1]){
st=arr[0];
sn=arr[1];
}
else if (arr[0]<arr[1]){
st=arr[1];
sn=arr[0];
}
else{
st=sn=arr[0];
}
for (i=2;i<n;i=i+1){
if (arr[i]>st){
sn=st;
st=arr[i];
}
else if (arr[i]<st && (arr[i]>sn || st==sn)){
sn=arr[i];
}
}
if (st==sn){
printf("No second largesst number found:\n");
}
else {
printf("Second largest number from array is %d\n",sn);
}
printf("\n");
return 0;
}

/*Enetr the number of terms:5
Enter 5 elements:12
122
14
167
176
Second largest number from array is 167*/





