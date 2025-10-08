#include<stdio.h>
int main()
{
int ld,fine;
printf("Enter the number of late days:");
scanf("%d",&ld);
if (ld<=0){
printf("No fine book returne on time\n");
}
else if (ld<=5){
fine=ld*2;
printf("Fine : %d\n",fine);
}
else if (ld<=10){
fine=(5*2)+(ld-5)*4;
printf("Fine : %d\n",fine);
}
else if (ld<=30){
fine=(5*2)+(5*4)+(ld-10)*6;
printf("Fine : %d\n",fine);
}
else{
printf("Membership cancled\n");
}
return 0;
}

//Enter the number of late days:7
//Fine : 18


//Enter the number of late days:30
//Fine : 150


