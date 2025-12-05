#include<stdio.h>
#include<string.h>
int main()
{
char str[200];
char ch;
int i,len;
printf("Enter the string:");
fgets(str,sizeof(str),stdin);
len=strlen(str);
for (i=0;i<len;i=i+1){
if (str[i] >= 'A' && str[i] <= 'Z'){
str[i]=str[i]+32;
}
else if (str[i] >= 'a' && str[i] <= 'z'){
str[i]=str[i]-32;
}
}
printf("Toggled string : %s\n",str);
return 0;
}

/*Enter the string:HELLO world
Toggled string : hello WORLD
*/
