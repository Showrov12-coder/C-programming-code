#include<stdio.h>
int main()
{
    int i;
    for(i=1;i<=5;i++)
    {
        printf("Bangladesh\n");
        if(i==2)
            continue;
        printf("World cup\n");
    }

    return 0;
}

