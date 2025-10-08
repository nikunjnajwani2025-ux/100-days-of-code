#include<stdio.h>
int main()
{
int a,i;
printf("Enter a number:");
scanf("%d",&a);
if ( a<=0){
printf("Enter a positive number\n");
}else {
printf("The factor of %d are",a);
for(i=1;i<=a;i=i+1){
if(a%i==0){
printf(" ");
printf("%d",i);
}
}
printf("\n");
}
return 0;
}

/*Enter a number:12
The factor of 12 are 1 2 3 4 6 12

Enter a number:16
The factor of 16 are 1 2 4 8 16*/

