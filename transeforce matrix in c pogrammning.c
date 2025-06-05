#include<stdio.h>
int main()
{
    int A[10][10],B[10][10],T[10][10];
    int row,col,i,j;
    printf("Enter a elements A and B : \n");
    scanf("%d %d",&row,&col);
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("A[%d][%d] =",i,j);
            scanf("%d",&A[i][j]);
        }
    }
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            T[i][j]=A[j][i];
        }
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++){
            printf("T[%d][%d]",T[i][j]);
        }
    }


}
