#include<stdio.h>
#include<string.h>
int main()
{
char str[1000];
int i=0,v=0,con=0;
printf("Enter the string:");
fgets(str,sizeof(str),stdin);
while (str[i]!='\0'){
char ch=str[i];
if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' || ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
v=v+1;
}
else if ((ch>='A' && ch <='Z') || (ch>='a' && ch<='z')){
con=con+1;
}
i=i+1;
}
printf("Number of vowels : %d\n",v);
printf("Numbar of consonents: %d\n",con);
printf("\n");
return 0;
}

/*Enter the string:Hello world
Number of vowels : 3
Numbar of consonents: 7*/

