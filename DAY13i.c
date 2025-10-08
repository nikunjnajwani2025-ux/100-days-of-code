#include<stdio.h>
int main()
{
int a,b;
char operator;
printf("Enter the first number:");
scanf("%d",&a);
printf("Enter the second number:");
scanf("%d",&b);
printf("Enter the operator(+,-,*,/,%%):");
scanf(" %c",&operator);
switch(operator){
case '+':
printf("Result: %d + %d = %d\n",a,b,a+b);
break;
case '-':
printf("Result: %d - %d = %d\n",a,b,a-b);
break;
case '*':
printf("Result: %d * %d = %d\n",a,b,a*b);
break;
case '/':
if (b!=0){
printf("Result: %d / %d = %d\n",a,b,a/b);
}
else{
printf("Error please integer");
}
break;
case '%':
printf("Result: %d %% %d = %d\n",a,b,a%b);
break;
default:
printf("Invalid operator");
}
return 0;
}

//Enter the first number:13
//Enter the second number:15
//Enter the operator(+,-,*,/,%):+
//Result: 13 + 15 = 28

//Enter the first number:45
//Enter the second number:30
//Enter the operator(+,-,*,/,%):-
//Result: 45 - 30 = 15

//Enter the first number:34
//Enter the second number:6
//Enter the operator(+,-,*,/,%):*
//Result: 34 * 6 = 204

//Enter the first number:45
//Enter the second number:9
//Enter the operator(+,-,*,/,%):/
//Result: 45 / 9 = 5

//Enter the first number:78
//Enter the second number:6
//Enter the operator(+,-,*,/,%):%
//Result: 78 % 6 = 0








