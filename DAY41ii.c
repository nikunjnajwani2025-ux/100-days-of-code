#include<stdio.h>
#include<string.h>
int main()
{
char str[1000];
int i=0;
printf("Enter the string:");
fgets(str,sizeof(str),stdin);
printf("\nCharacter of the string:\n");
while (str[i]!='\0'){
if (str[i]=='\n'){
break;
}
printf("%c\n",str[i]);
i=i+1;
}
printf("\n");
return 0;
}


/*Enter the string:Hello world

Character of the string:
H
e
l
l
o
 
w
o
r
l
d*/

