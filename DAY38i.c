#include<stdio.h>
int main()
{
int r,c,i,j;
printf("Enter the number of rows:");
scanf("%d",&r);
printf("Enter the number of columns:");
scanf("%d",&c);
if (r!=c){
printf("Invalid input the addition is betwenn square matrix:\n");
return 1;
}
int matrix1[r][c];
printf("Enetr the elements of first matrix:\n");
for (i=0;i<r;i=i+1){
for (j=0;j<c;j=j+1){
scanf("%d",&matrix1[i][j]);
}
}
int matrix2[r][c];
printf("Enter the elements of second matrix:\n");
for (i=0;i<r;i=i+1){
for (j=0;j<c;j=j+1){
scanf("%d",&matrix2[i][j]);
}
}
int sum[r][c];
printf("\n The sum of matrix:\n");
for (i=0;i<r;i=i+1){
for (j=0;j<c;j=j+1){
sum[i][j]=matrix1[i][j]+matrix2[i][j];
printf("%d ",sum[i][j]);
}
printf("\n");
}
return 0;
}

/*Enter the number of rows:3
Enter the number of columns:3
Enetr the elements of first matrix:
1 2 3
4 5 6 
7 8 9
Enter the elements of second matrix:
10 11 12  
13 14 15 
16 17 18 

 The sum of matrix:
11 13 15 
17 19 21 
23 25 27 */



