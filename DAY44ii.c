#include<stdio.h>
#include<string.h>
int main()
{
char str[200];
int i,len;
printf("Enter the string:");
fgets(str,sizeof(str),stdin);
len=strlen(str);
for (i=0;i<len;i=i+1){
if (str[i] == ' '){
str[i]='-';
}
}
printf("New string : %s\n",str);
return 0;
}

/*Enter the string:hello world 2025!
New string : hello-world-2025!
*/
