#include<stdio.h>
int main()
{
    int T,n,reversed,remainder,x;
    scanf("%d",&T);
    for(int i=1;i<=T;i++)
    {
        scanf("%d",&n);
        x=n;
        reversed=0;
        while(n>0)
        {
            remainder=n%10;
            reversed=reversed*10+remainder;
            n=n/10;
        }
        if(x==reversed)
        {
            printf("Case %d: Yes\n",i);
        }else
        {
            printf("Case %d: No\n",i);
        }
    }
}
