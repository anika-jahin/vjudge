#include<stdio.h>

#define MAX_n 100005
#define MAX_Q 50000

int BinarySearch(int points[],int n,int x)
{
    int low=0,high=n-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(points[mid]==x)
        {
            return mid;
        }else if(points[mid]<x)
        {
            low=mid+1;
        }else
        {
            high=mid-1;
        }
    }
    return low;
}

int main()
{
    int T,n,point,q,A,B;
    scanf("%d",&T);
    for(int j=1;j<=T;j++)
    {
        scanf("%d %d",&n,&q);

        int points[MAX_n];

        for(int i=0;i<n;i++)
        {
            scanf("%d",&points[i]);
        }

        printf("Case %d:\n",j);

        for(int i=0;i<q;i++)
        {
            scanf("%d %d",&A,&B);

           int countA=BinarySearch(points,n,A);
           int countB=BinarySearch(points,n,B+1);
            printf("%d\n",countB-countA);
        }
    }
    return 0;
}
