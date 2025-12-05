#include<stdio.h>
#include<string.h>
int main()
{
int len,i;
char str[100];
char temp;
printf("Enter the string:");
fgets(str,sizeof(str),stdin);
str[strcspn(str,"\n")]='\0';
len=strlen(str);
for (i=0;i<len/2;i=i+1){
temp=str[i];
str[i]=str[len-i-1];
str[len-i-1]=temp;
}
printf("Revesred string:%s\n",str);
return 0;
}


/*Enter the string:hello world
Revesred string:dlrow olleh
*/
