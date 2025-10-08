#include<stdio.h>
int main()
{
int day;
printf("Enter the number between 1 to 7:");
scanf("%d",&day);
switch(day){
case 1:
printf("Monday\n");
break;
case 2:
printf("Tuesday\n");
break;
case 3:
printf("Wednsday\n");
break;
case 4:
printf("Thursday\n");
break;
case 5:
printf("Friday\n");
break;
case 6:
printf("Saturday\n");
break;
case 7:
printf("Sunday\n");
break;
default:
printf("Invalid input please input between 1 to 7\n");
}
return 0;
}

//Enter the number between 1 to 7:4
//Thursday

//Enter the number between 1 to 7:7
//Sunday


