#include<stdio.h>
int main()
{
int r,c,i,j;
printf("Enetr the number of rows:");
scanf("%d",&r);
printf("enetr the number of columns:");
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
int sum=0;
for (i=0;i<r;i=i+1){
sum=sum+matrix[i][i];
}
printf("The sum of main diagonal is %d\n",sum);
printf("\n");
return 0;
}

/*Enetr the number of rows:3
enetr the number of columns:3
Enetr the elements of matrix:
1 4 6
2 5 8
3 6 9
The sum of main diagonal is 15*/


