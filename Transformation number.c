#include<stdio.h>
int main()
{
    int A[5]= {10,20,30,40,50};
    int B[5]= {0,0,0,0,0},i,j;
    for(i=0;i<5; i++)
    {
        B[3]=A[4];
        printf("B:%d\n",B[3]);
    }


    return 0;
}
