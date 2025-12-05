#include<stdio.h>
int main()
{
int r,c,i,j;
printf("Enter the number of rows:");
scanf("%d",&r);
printf("Enetr the number of columns:");
scanf("%d",&c);
int matrix[r][c];
int transpos[c][r];
printf("Enetr the elements of matrix:\n");
for (i=0;i<r;i=i+1){
for (j=0;j<c;j=j+1){
scanf("%d",&matrix[i][j]);
}
}
for (i=0;i<r;i=i+1){
for (j=0;j<c;j=j+1){
transpos[j][i]=matrix[i][j];
}
}
printf("\norignal Matrix:\n");
for (i=0;i<r;i=i+1){
for (j=0;j<c;j=j+1){
printf("%d ",matrix[i][j]);
}
printf("\n");
}
printf("Transpose matrix:\n");
for (i=0;i<c;i=i+1){
for (j=0;j<r;j=j+1){
printf("%d ",transpos[i][j]);
}
printf("\n");
}
return 0;
}

/*Enter the number of rows:3
Enetr the number of columns:3
Enetr the elements of matrix:
1 2 3 
4 5 6
7 8 9

orignal Matrix:
1 2 3 
4 5 6 
7 8 9 
Transpose matrix:
1 4 7 
2 5 8 
3 6 9*/ 




