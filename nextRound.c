#include<stdio.h>
int main()
{
    int n,k;
    scanf("%d %d",&n,&k);
    int score[n];
    int count=0;
    for(int i=0;i<n;++i)
    {
        scanf("%d",&score[i]);

    }
    for(int i=0;i<n;++i)
    {
         if(score[i]>=score[k-1] && score[i]>0)
        {
            count++;
        }

    }

    printf("%d\n",count);
    return 0;
}
