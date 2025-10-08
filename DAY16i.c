#include<stdio.h>
void printbinary(int n){
if (n>1){
printbinary(n/2);
}
printf("%d",n%2);
}
int main()
{
int a;
printf("Enter a numbeer:");
scanf("%d",&a);
if (a==0){
printf("Binary:0\n");
}
else{
printf("Binary:");
printbinary(a);
printf("\n");
}
return 0;
}

/*Enter the number:67
Binary:1000011


Enter the number:34
Binary:100010*/

