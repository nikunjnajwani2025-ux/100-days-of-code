 #include<stdio.h>
 int main() 
 { 
 int a, b, temp; 
 printf("Enter the first number (a): ");
 scanf("%d", &a);
 printf("Enter the second number (b): ");
 scanf("%d", &b);
 printf("\nBefore swapping:\n");
 printf("a = %d\n", a);
 printf("b = %d\n", b);
 temp = a; 
 a = b;
 b = temp;
 printf("\nAfter swapping:\n");
 printf("a = %d\n", a);
 printf("b = %d\n", b);
 return 0;
 }
 
 //Enter the first number (a): 15
//Enter the second number (b): 10

//Before swapping:
//a = 15
//b = 10

//After swapping:
//a = 10
//b = 15


//Enter the first number (a): 18
//Enter the second number (b): 10

//Before swapping:
//a = 18
//b = 10

//After swapping:
//a = 10
//b = 18




