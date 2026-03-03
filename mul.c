#include<stdio.h>
int main()
{int i,j,k;
int A[2][2],B[2][2],C[2][2];

printf("enter the elemnts of matrix a\n");
for(i=0;i<2;i++){
    for(j=0;j<2;j++){
        scanf("%d",&A[i][j]);
    }
}
printf("enter the elements of matrix B\n");
for(i=0;i<2;i++){
    for(j=0;j<2;j++){
        scanf("%d",&B[i][j]);
    }
}
printf("multiplication of two matrix\n");
for(i=0;i<2;i++){
    for(j=0;j<2;j++)
    {C[i][j]=0;
    for(k=0;k<2;k++)
    {C[i][j]=C[i][j]+A[i][k]*B[k][j];
    }
    printf("%d",C[i][j]);
    }
printf("\n");
    
    }
    return 0;
}