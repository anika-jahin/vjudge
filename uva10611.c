#include<stdio.h>
int main()
{
    int N,Q,ChimpsHeight;
    scanf("%d",&N);
    int HeightLady[50000];

    for(int i=0;i<N;i++)
    {
        scanf("%d",&HeightLady[i]);
    }

    scanf("%d",&Q);
    for(int i=0;i<Q;i++)
    {
        scanf("%d",&ChimpsHeight);
        int min=0,max=0;
        for(int j=0;j<N;j++)
        {
            if(HeightLady[j]<ChimpsHeight)
            {
                min=HeightLady[j];
            }else
            break;
        }

        for(int j=N-1;j>=0;j--)
        {
            if(HeightLady[j]>ChimpsHeight)
            {
                max=HeightLady[j];
            }else
            break;
        }
        if(min==0)
        {
            printf("X ");
        }else
        {
            printf("%d ",min);
        }
        if(max==0)
        {
            printf("X\n");
        }else
        {
            printf("%d\n",max);
        }
    }
    return 0;
}
