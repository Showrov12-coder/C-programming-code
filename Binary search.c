#include<stdio.h>
int main()
{
    int A[]={2,4,6,8,10,12,14,16,18,20};
    int item=8;
    int Left,Right,Middle;
    Left=0;
    Right=9;

    while(Left<=Right)
    {
        Middle=(Left+Right)/2;
        if(A[Middle]==item)
        {
            printf("Item is founded & position is :  %d\n",Middle);
            return 0;
        }
        else if(A[Middle] < item)
        {
            Left = Middle + 1;
        }
        else
        {
            Right= Middle -1 ;
        }
    }
        printf("Item is not Found!!");

    return 0;
}
