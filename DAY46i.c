#include<stdio.h>
#include<string.h>
int main()
{
char str[200];
char result[200];
char ch;
int i,j,len;
printf("Enter the string:");
fgets(str,sizeof(str),stdin);
len=strlen(str);
for (i=0;i<len;i=i+1){
ch=str[i];
if (!(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' || ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' )){
result[j=j+1]=ch;
}
}
result[j]='\0';
printf("String after removing vowels: %s\n",result);
return 0;
}


/*Enter the string:HELLO WORLD
String after removing vowels:  HLL WRLD*/

