#include<stdio.h>
int main()
{
int r,c,p,q,i,j,k;
printf("Enter the number of  rows of first matrix:");
scanf("%d",&r);
printf("Enter the number of columns of first matrix:");
scanf("%d",&c);
printf("Enter the number of  rows of second matrix:");
scanf("%d",&p);
printf("Enter the number of columns of second matrix:");
scanf("%d",&q);
if (c!=p){
printf("Matrix multiplication is not possible:\n");
}
int A[r][c],B[p][q],C[r][q];
printf("Enter the  elements of first matrix:\n");
for (i=0;i<r;i=i+1){
for (j=0;j<c;j=j+1){
scanf("%d",&A[i][j]);
}
printf("\n");
}
printf("Enter the elements of second matrix:\n");
for (i=0;i<p;i=i+1){
for (j=0;j<q;j=j+1){
scanf("%d",&B[i][j]);
}
}
for (i=0;i<r;i=i+1){
for (j=0;j<q;j=j+1){
C[i][j]=0;
}
}
for (i=0;i<r;i=i+1){
for (j=0;j<q;j=j+1){
for (k=0;k<c;k=k+1){
C[i][j]=C[i][j]+A[i][k]*B[k][j];
}
}
}
printf("Multiplication of two matrix :\n");
for (i=0;i<r;i=i+1){
for (j=0;j<q;j=j+1){
printf("%d ",C[i][j]);
}
printf("\n");
}
return 0;
}

/*Enter the number of  rows of first matrix:2
Enter the number of columns of first matrix:3
Enter the number of  rows of second matrix:3
Enter the number of columns of second matrix:2
Enter the  elements of first matrix:
1 2 3

4 5 6

Enter the elements of second matrix:
7 8
9 10
11 12
Multiplication of two matrix :
58 64 
139 154 */




