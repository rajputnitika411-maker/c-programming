#include<stdio.h>
int main()
{int i,j;
int A[i][j],B[i][j],C[i][j];
printf("enter the elements of matrix A\n");
for(i=0;i<2;i++)
{for(j=0;j<2;j++)
{ scanf("%d",&A[i][j]);
}
}
printf("enter the elements of matrix b\n");
for(i=0;i<2;i++)
{for(j=0;j<2;j++)
{scanf("%d",&B[i][j]);
}
}
printf("sum of matrix A and B\n");
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{C[i][j]=A[i][j]+B[i][j];
printf("%d",C[i][j]);
}
printf("\n");
}
return 0;
}