#include<stdio.h>
int main()
{
int r,c,i,j,sum=0;
printf("Enter the number of rows:");
scanf("%d",&r);
printf("Enetr the number of columns:");
scanf("%d",&c);
int matrix[r][c];
printf("Enetr the elements of matrix:\n");
for (i=0;i<r;i=i+1){
for (j=0;j<c;j=j+1){
scanf("%d",&matrix[i][j]);
sum=sum+matrix[i][j];
}
}
printf("\nMatrix:\n");
for (i=0;i<r;i=i+1){
for (j=0;j<c;j=j+1){
printf("%d ",matrix[i][j]);
}
printf("\n");
}
printf("The sum of all elements of matrix is %d\n",sum);
return 0;
}

/*Enter the number of rows:3
Enetr the number of columns:
3
Enetr the elements of matrix:
1 2 3
4 5 6
7 8 9

Matrix:
1 2 3 
4 5 6 
7 8 9 
The sum of all elements of matrix is 45*/




