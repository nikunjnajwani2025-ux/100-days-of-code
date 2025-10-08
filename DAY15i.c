#include<stdio.h>
int main()
{
int n,i,fact=1;
printf("Enter the value of n:");
scanf("%d",&n);
if (n<0){
printf("Please enter positive number");
}
else{
for (i=1;i<=n;i=i+1){
fact=fact*i;
}
printf("Factorial of %d = %d\n",n,fact);
}
return 0;
}

//Enter the value of n:5
//Factorial of 5 = 120


//Enter the value of n:7
//Factorial of 7 = 5040

