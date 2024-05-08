#include<stdio.h>
int rohmbus(int a)
{
    if(a==1)
        return 1;
    else
        return rohmbus(a-1)+4*(a-1);
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d\n",rohmbus(n));
}
