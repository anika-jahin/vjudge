#include<stdio.h>
int main()
{
    int Test;
    scanf("%d",&Test);
    for(int i=1;i<=Test;i++)
    {
        int n;
        scanf("%d",&n);
        int max=0;
        for(int i=0;i<n;i++)
        {
            int a;
            scanf("%d",&a);
            if(a>max)
            {
                max=a;
            }
        }
        printf("Case %d: %d\n",i,max);

    }
}
