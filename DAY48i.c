#include<stdio.h>
#include<string.h>
int isRo(char str1[],char str2[])
{
if (strlen(str1) != strlen(str2)){
printf("Length must be equal.\n");
return 0;
}
char temp[400];
strcpy(temp,str1);
strcat(temp,str1);
return strstr(temp,str2) != NULL;
}
int main()
{
char str1[200];
char str2[200];
printf("Enter first string:");
scanf("%s",str1);
printf("Enter second string:");
scanf("%s",str2);
if (isRo(str1,str2)){
printf("Yes,it is a rotation.\n");
}
else{
printf("No,it is not a rotation.\n");
}
return 0;
}
