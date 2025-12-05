#include<stdio.h>
int main()
{
int r,c,i,j;
printf("Enter the number of rows:");
scanf("%d",&r);
printf("Enetr the number of columns:");
scanf("%d",&c);
int matrix[r][c];
printf("Enetr the elements of matrix:\n");
for (i=0;i<r;i=i+1){
for (j=0;j<c;j=j+1){
scanf("%d",&matrix[i][j]);
}
}
printf("\nMatrix:\n");
for (i=0;i<r;i=i+1){
for (j=0;j<c;j=j+1){
printf("%d ",matrix[i][j]);
}
printf("\n");
}
return 0;
}
