#include<stdio.h>
int main()
{
long long bin,compliment=0,place=1,temp;
int digit;
printf("Enter a binary number:");
scanf("%lld",&bin);
temp=bin;
while (temp!=0){
digit=temp%10;
if (digit==0){
compliment=compliment+1*place;
}
else if (digit==1){
}
else{
printf("Invalid input please enter 0 or 1\n");
return 1;
}
temp=temp/10;
place=place*10;
}
printf("1's compliment:%lld\n",compliment);
return 0;
}

/*Enter a binary number:1010
1's compliment:101

Enter a binary number:100101
1's compliment:11010*/

