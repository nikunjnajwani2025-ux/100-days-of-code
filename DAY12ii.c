#include<stdio.h>
int main()
{
int u;
float bill;
printf("Enter the number of units:");
scanf("%d",&u);
if (u<=100){
bill=u*5;
}
else if (u<=200){
bill=(100*5)+(u-100)*7;
}
else if (u<=300){
bill=(100*5)+(100*7)+(u-200)*10;
}
else{
bill=(100*5)+(100*7)+(100*10)+(u-300)*12;
}
printf("Electric bill for %d is %.2f\n.",u,bill);
return 0;
}

//Enter the number of units:300
//Electric bill for 300 is 2200.00

//Enter the number of units:400
//Electric bill for 400 is 3400.00

//Enter the number of units:578
//Electric bill for 578 is 5536.00


