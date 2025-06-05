#include<stdio.h>
int main()
{
    int a;
    int b;
    printf("Enter two integer number:");
    scanf("%d %d",&a,&b);
    printf("a+b=%d\n",a+b);
    printf("a*b=%d\n",a*b);
    printf("a-b=%d\n",a-b);
    printf("a/b=%f\n",(float)a/b);
    return 0;
}
