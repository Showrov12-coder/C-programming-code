#include<stdio.h>
#define size 3
int main()
{   int A[size][size];
    int B[size][size];
    int R[size][size];
    int row,col;

    printf("Enter elements in matrix A of size 3x3: \n");
    for(row=0;row<size;row++){
        for(col=0;col<size;col++){
            scanf("%d",&A[size][size]);
        }
    }
     printf("Enter elements in matrix B of size 3x3: \n");
    for(row=0;row<size;row++){
        for(col=0;col<size;col++){
            scanf("%d",&B[size][size]);
        }
    }
    for(row=0;row<size;row++){
        for(col=0;col<size;col++){
            R[size][size]=A[size][size]+B[size][size];      }
    }
    for(row=0;row<size;row++){
        for(col=0;col<size;col++)
        {
             printf("%d ",R[size][size]);
        }
        printf("\n");
    }


    return 0;
}
