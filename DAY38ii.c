#include<stdio.h>
int main()
{
int r,c,i,j;
printf("Enetr the number of rows:");
scanf("%d",&r);
printf("Enter the number of columns:");
scanf("%d",&c);
if (r!=c){
printf("Invalid input the addition is betwenn square matrix:\n");
return 1;
}
int matrix[r][c];
printf("Enetr the elements of matrix:\n");
for (i=0;i<r;i=i+1){
for (j=0;j<c;j=j+1){
scanf("%d",&matrix[i][j]);
}
}
int msf=0;
for (i=0;i<r;i=i+1){
for (j=0;j<c;j=j+1){
if (matrix[i][j]!=matrix[j][i]){
msf=1;
break;
}
}
}
if (msf==0){
printf("The matrix is symmetric\n");
}
else{
printf("The matrix is not symmetric\n");
}
printf("\n");
return 0;
}

/*Enetr the number of rows:3
Enter the number of columns:3
Enetr the elements of matrix:
1 2 3
2 4 5
3 5 6
The matrix is symmetric*/





