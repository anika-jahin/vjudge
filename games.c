#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int home_uniform[n];
    int guest_uniform[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d %d",&home_uniform[i],&guest_uniform[i]);

    }
     int games_in_guest_uniform=0;

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i!=j)
                {
                    if(home_uniform[i]==guest_uniform[j])
                    {
                        games_in_guest_uniform++;
                    }
                }
            }
        }
        printf("%d\n",games_in_guest_uniform);
    return 0;
}
