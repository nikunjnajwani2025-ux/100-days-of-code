#include<stdio.h>
#include<string.h>
int main()
{
int len,i,flag=0;
char str[100];
char temp;
printf("Enter the string:");
fgets(str,sizeof(str),stdin);
str[strcspn(str,"\n")]='\0';
len=strlen(str);
for (i=0;i<len/2;i=i+1){
if (str[i]!=str[len-i-1]){
flag=1;
break;
}
}
if (flag==0){
printf("The string is pallendrome.\n");
}
else {
printf("The string is not pallendrome.\n");
}
return 0;
}


/*Enter the string:madam
The string is pallendrome.

Enter the string:hello
The string is not pallendrome.

Enter the string:sus
The string is pallendrome.*/

