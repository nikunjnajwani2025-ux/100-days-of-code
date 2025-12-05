#include<stdio.h>
#include<string.h>
int main()
{
char sen[200];
char lo[200];
lo[0]='\0';
int maxlen=0;
printf("Enter the sentence: ");
fgets(sen,sizeof(sen),stdin);
int len=strlen(sen);
int i=0;
while (i < len){
while ( i < len && sen[i] == ' '){
i=i+1;
}
int start=i;
while ( i < len && sen[i] != ' ' && sen[i] != '\n'){
i=i+1;
}
int wordlen = i - start;

if ( wordlen > maxlen){
maxlen = wordlen;
strncpy(lo, &sen[start], wordlen);
lo[wordlen]='\0';
}
i=i+1;
}
printf("The longest word : %s\n",lo);
printf("Lengthe : %d\n",maxlen);
return 0;
}

/*Enter the sentence: i love programming in c
The longest word : programming
Lengthe : 11*/

