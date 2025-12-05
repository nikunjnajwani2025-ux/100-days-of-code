#include<stdio.h>
#include<string.h>
int main()
{
char str[200];
int i,ind;
int freq[26]={0};
char ch,firr='\0';
printf("Enter the string:");
fgets(str,sizeof(str),stdin);
for (i=0;str[i]!='\0';i=i+1){
ch=str[i];
if (ch >= 'a' && ch <= 'z' ){
ind=ch-'a';
freq[ind]=freq[ind]+1;
if ( freq[ind] == 2 ){
firr=ch;
break;
}
}
}
if (firr != '\0'){
printf("First repeating lower case letter : %c\n",firr);
}
else {
printf("No first repeating lower case letter .\n");
}
return 0;
}

/*Enter the string:programming
First repeating lower case letter : r
*/

