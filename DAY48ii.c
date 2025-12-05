#include<stdio.h>
#include<string.h>
void re(char *start,char *end){
while (start < end){
char temp = *start;
*start = *end;
*end = temp;
start=start+1;
end=end-1;
}
}
int main()
{
char sen[200];
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
int end=i-1;
if (start < len){
re(&sen[start],&sen[end]);
}
i=i+1;
}
printf("Revrsed words : %s\n",sen);
return 0;
}

/*Enter the sentence: welcome to programming
Revrsed words : emoclew ot gnimmargorp
*/
