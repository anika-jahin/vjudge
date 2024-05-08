#include<stdio.h>
int main()
{
    int T,i;
    scanf("%d",&T);
    while(T--)
    {
        int n;
        scanf("%d",&n);

        int score[n];
        for(int i=0;i<n;i++)
        {
            scanf("%d",&score[i]);
        }
        int Max_diff=score[0]-score[1];
        int max=score[0];

        for(int i=1;i<n;i++)
        {
            int diff=max-score[i];
            if(diff>Max_diff)
            {
                Max_diff=diff;
            }
            if(score[i]>max)
            {
                max=score[i];
            }
        }
        printf("%d\n",Max_diff);
    }
    return 0;
}
