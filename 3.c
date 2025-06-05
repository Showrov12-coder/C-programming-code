#include<stdio.h>
int main()
{
    int a[7]={12,-23,22,32,12,22,400};
    int max=a[0],i;
    for(i=1;i<7;i++){
        if(a[i]>max)
            max=a[i];
    }
    printf("Max value is :%d",max);
    return  0;
}
