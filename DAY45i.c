#include<stdio.h>
#include<string.h>
int main()
{
char str[200];
char ch;
int i,len,count=0;
printf("Enter the string:");
fgets(str,sizeof(str),stdin);
printf("Enter the character to search for :");
scanf("%c",&ch);
len=strlen(str);
for (i=0;i<len;i=i+1){
if (str[i]==ch){
count=count+1;
}
}
printf("\n Frequency of '%c' =%d\n",ch,count);
return 0;
}

/*Enter the string:hello world im nikunj najwani
Enter the character to search for :i

 Frequency of 'i' =3
*/
