#include<stdio.h>
#include<string.h>
int main()
{
char str[1000];
int i=0;
printf("Enter the string:");
fgets(str,sizeof(str),stdin);
while (str[i]!='\0'){
if (str[i]>= 'a' && str[i]<= 'z'){
str[i]=str[i]-32;
}
i=i+1;
}
printf("Upper case string is : %s\n",str);
printf("\n");
return 0;
}
