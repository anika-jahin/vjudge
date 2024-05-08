#include<stdio.h>
int main()
{
    int t,min,max,temp;
    scanf("%d",&t);
    while(t--)
    {
        min=99;
        max=0;
        int numOfStore;
        scanf("%d",&numOfStore);

        for(int i=1;i<=numOfStore;i++)
        {
            scanf("%d",&temp);

            if(temp<min)
            {
                min=temp;
            }
            if(temp>max)
            {
                max=temp;
            }
        }
        printf("%d\n",(max-min)*2);
    }
    return 0;
}
