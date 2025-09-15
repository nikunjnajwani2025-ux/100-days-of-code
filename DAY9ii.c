#include<stdio.h>
int main()
{
float p;
printf("Enter your persentage:");
scanf("%f",&p);
if(p>=90.0){
printf("Your grade is A\n");
}
else if (p>=80.0){
printf("your grade is B\n");
}
else if (p>=70.0){
printf("Your grade is C\n");
}
else if (p>=60){
printf("Your grade is D\n");
}
else{
printf("Your grade is F\n");
}
return 0;
}

//Enter your persentage:89
//your grade is B


//Enter your persentage:45
//Your grade is F

