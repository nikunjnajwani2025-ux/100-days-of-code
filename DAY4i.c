#include<stdio.h>
int main() 
{
int a, b;
printf("Enter the first number (a): "); 
scanf("%d", &a);
printf("Enter the second number (b): ");
scanf("%d", &b); 
printf("\nBefore swapping:\n");
printf("a = %d\nb = %d\n", a, b);
a = a + b;
b = a - b;
a = a - b; 
printf("\nAfter swapping:\n");
printf("a = %d\nb = %d\n", a, b);
return 0;
}  

//Enter the first number (a): 15
//Enter the second number (b): 18

//Before swapping:
//a = 15
//b = 18

//After swapping:
//a = 18
//b = 15


//Enter the first number (a): 17
//Enter the second number (b): 18

//Before swapping:
//a = 17
//b = 18

//After swapping:
//a = 18
//b = 17




