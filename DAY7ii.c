#include<stdio.h>
int main()
{
char ch;
printf("Enter the character of ur choise:");
scanf("%c",&ch);
if(ch>='A' && ch<='Z'){
ch=ch+32;
}
if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
printf("%c is vowel\n",ch);
}
else
{
printf("%c is not a vowel\n",ch);
}
return 0;
}

//Enter the character of ur choise:A
//a is vowel


//Enter the character of ur choise:d
//d is not a vowel

