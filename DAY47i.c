#include<stdio.h>
#include<string.h>
int main()
{
char str1[200],str2[200];
char temp;
int i,j,len1,len2;
printf("Enter the first string:");
fgets(str1,sizeof(str1),stdin);
printf("Enter the string:");
fgets(str2,sizeof(str2),stdin);
str1[strcspn(str1,"\n")]='\0';
str2[strcspn(str2,"\n")]='\0';
len1=strlen(str1);
len2=strlen(str2);
if (len1 != len2){
printf("The string are not anagram:");
return 1;
}
for (i=0;i<len1-1;i=i+1){
for (j=i+1;j<len1;j=j+1){
if (str1[i] >str1[j]){
temp=str1[i];
str1[i]=str1[j];
str1[j]=temp;
}
}
}
for (i=0;i<len2-1;i=i+1){
for (j=i+1;j<len2;j=j+1){
if (str2[i] >str2[j]){
temp=str2[i];
str2[i]=str2[j];
str2[j]=temp;
}
}
}
for (i=0;i<len1;i=i+1){
if (str1[i]!=str2[i]){
printf("The string are not anagram:\n");
return 1;
}
}
printf("The string are anagram.\n");
return 0;
}


/*Enter the first string:listen
Enter the string:silent
The string are anagram.
*/
