#include<stdio.h>
#include<string.h>
int main()
{
char str[1000];
int count=0;
printf("Enter the string:");
fgets(str,sizeof(str),stdin);
while (str[count]!='\0' && str[count]!='\n'){
count=count+1;
}
printf("Number of character in the string is %d\n",count);
printf("\n");
return 0;
}

/*Enter the string:hello world
Number of character in the string is 11

*/
