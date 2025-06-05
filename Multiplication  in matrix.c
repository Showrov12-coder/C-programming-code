#include<stdio.h>
int main()
{
    int A[10][10],B[10][10],C[10][10];
    int i,j,k,sum=0,row,col;
    printf("Enter a elements of matrix A:\n");
    scanf("%d %d",&row,&col);
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("A[%d][%d]",i,j);
            scanf("%d",&A[i][j]);
        }
    }
    printf("Enter a elements of matrix B:\n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("B[%d][%d]",i,j);
            scanf("%d",&B[i][j]);
        }
    }
    printf("Enter a elements of matrix C:\n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++){
            for(k=0;k<col;k++)
        }
        sum=sum+A[i][k] * B[k][j];
        }
        result[i][j]=sum;
        sum=0;

       {
            printf("%d",C[i][j]);
       }

    printf("\n");
}
