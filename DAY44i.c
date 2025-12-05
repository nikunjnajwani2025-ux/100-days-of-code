#include<stdio.h>
#include<string.h>
int main()
{
char str[200];
int sp=0,di=0,spc=0;
int i,len;
printf("Enter the string:");
fgets(str,sizeof(str),stdin);
len=strlen(str);
for (i=0;i<len;i=i+1){
if (str[i] == ' '){
sp=sp+1;
}
else if (str[i]>= '0' && str[i]<= '9'){
di=di+1;
}
else if (!((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z') || (str[i] >= '0' && str[i] <= '9' ) || str[i] == '\n' )){
spc=spc+1;
}
}
printf("Number of spaces: %d\n",sp);
printf("Number of digit : %d\n",di);
printf("Number of special character: %d\n",spc);
return 0;
}

/*Enter the string: hello world 2025 !
Number of spaces: 4
Number of digit : 4
Number of special character: 1*/



