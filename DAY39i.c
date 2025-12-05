#include<stdio.h>
int main()
{
int r,c,i,j;
printf("Enetr the number of rows:");
scanf("%d",&r);
printf("Enetr the number columns:");
scanf("%d",&c);
if (r!=c){
printf("Invalid input the addition is betwenn square matrix:\n");
return 1;
}
int matrix[r][c];
printf("The elements of matrix:\n");
for (i=0;i<r;i=i+1){
for (j=0;j<c;j=j+1){
scanf("%d",&matrix[i][j]);
}
}
int isd=1;
for (i=0;i<r;i=i+1){
for (j=i+1;j<r;j=j+1){
if (matrix[i][i]==matrix[j][j]){
isd=0;
break;
}
}
}
if (isd){
printf("All diagonal elemnets are distinct.\n");
}
else{
printf("All diagonal elements are not distinct.\n");
}
printf("\n");
return 0;
}

/*Enetr the number of rows:3
Enetr the number columns:3
The elements of matrix:
1 5 3 
2 4 6
7 8 9
All diagonal elemnets are distinct.*/

