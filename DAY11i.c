#include<stdio.h>
int main()
{
int months;
printf("Enter the number between 1 to 12:");
scanf("%d",&months);
switch(months){
case 1:
printf("January - 31 days\n");
break;
case 2:
printf("February - 28 or 29 days\n");
break;
case 3:
printf("March - 31 days\n");
break;
case 4:
printf("April - 30 days\n");
break;
case 5:
printf("May - 31 days\n");
break;
case 6:
printf("June - 30 days\n");
break;
case 7:
printf("july - 31 days\n");
break;
case 8:
printf("August - 31 days\n");
break;
case 9:
printf("september - 30 days\n");
break;
case 10:
printf("october - 31 days\n");
break;
case 11:
printf("November - 30 days\n");
break;
case 12:
printf("December - 31 days\n");
break;
default:
printf("Invalid input please enter number between 1 to 12\n");
}
return 0;
}

//Enter the number between 1 to 12:5
//May - 31 days


//Enter the number between 1 to 12:7
//july - 31 days








