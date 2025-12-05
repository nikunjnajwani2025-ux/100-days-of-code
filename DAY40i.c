#include<stdio.h>
int main()
{
int a,n,i,j,k;
printf("Enter the number of rows:");
scanf("%d",&a);
printf("Enter the number of columns:");
scanf("%d",&n);
int matrix[a][n];
printf("Enter the matrix elements:\n");
for (i=0;i<a;i=i+1){
for (j=0;j<n;j=j+1){
scanf("%d",&matrix[i][j]);
}
}
printf("\nDiagonal transersal\n");
for (k=0;k<n;k=k+1){
i=0;
j=k;
while (i<a && j>=0){
printf("%d",matrix[i][j]);
i=i+1;
j=j-1;
}
printf("\n");
}
for (k=1;k<a;k=k+1){
i=k;
j=n-1;
while (i<a && j>=0){
printf("%d",matrix[i][j]);
i=i+1;
j=j-1;
}
printf("\n");
}
return 0;
}


/*Enter the number of rows:3
Enter the number of columns:3
Enter the matrix elements:
1 2 3
4 5 6
7 8 9

Diagonal transersal
1
24
357
68
9*/





