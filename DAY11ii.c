#include<stdio.h>
int main()
{
float cp,sp,amount,percentage;
printf("Enter the costprice:");
scanf("%f",&cp);
printf("Enter the sellingprice:");
scanf("%f",&sp);
if (sp>cp){
amount=sp-cp;
percentage=(amount/cp)*100;
printf("profit : %.2f\n",amount);
printf("profit percentage : %.2f\n",percentage);
}
else if (cp>sp){
amount=cp-sp;
percentage=(amount/cp)*100;
printf("Loss : %.2f\n",amount);
printf("Loss percentage : %.2f\n",percentage);
}
else
{
printf("No profit No loss\n");
}
return 0;
}

//Enter the costprice:12000
//Enter the sellingprice:15000
//profit : 3000.00
//profit percentage : 25.00

//Enter the costprice:24000 
//Enter the sellingprice:23000 
//Loss : 1000.00
//Loss percentage : 4.17


//Enter the costprice:25000
//Enter the sellingprice:25000
//No profit No loss



