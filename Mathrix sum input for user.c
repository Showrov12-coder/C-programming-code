#include<stdio.h>
#define size 3
int main()
{
    int A[10][10];
    int B[10][10];
    int R[10][10];
    int row,col,i,j;

    printf("Enter elements in matrix A: \n");
    scanf("%d %d",&row,&col);
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("A[%d][%d] ",i,j);
            scanf("%d",&A[i][j]);
        }
    }
    printf("Enter elements in matrix B: \n");

    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("B[%d][%d]=",i,j);
            scanf("%d",&B[i][j]);
        }
    }
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            R[i][j]=A[i][j]+B[i][j];
        }
    }
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("%d ",R[i][j]);
        }
        printf("\n");
    }


    return 0;
}


