#include<stdio.h>
int main()
{
    int T,b,p,f,h,c,No_of_beef_burgers=0,No_of_chicken_burgers=0,total_price=0;
    scanf("%d",&T);
    for(int i=1;i<=T;i++)
    {
        scanf("%d %d %d",&b,&p,&f);
        scanf("%d %d",&h,&c);

        int No_of_beef_burgers= (p*2);
        int No_of_chicken_burgers= (f*2);

        if(No_of_beef_burgers<=b && No_of_chicken_burgers<=b)
        {
            int  total_bun=( No_of_beef_burgers + No_of_chicken_burgers);
            if(total_bun<=b)
            {
                int total_price = (p * h) + (f * c);
                printf("%d\n",total_price);
            }else
            {
                if(No_of_beef_burgers==b && No_of_chicken_burgers==b)
                {
                    if(h>c)
                    {
                        int total_price= p*h;
                        printf("%d\n",total_price);
                    }else if(c>h)
                    {
                        int total_price= f*c;
                        printf("%d\n",total_price);
                    }else
                    {
                        int total_price= f*c;
                        printf("%d\n",total_price);
                    }
                }
            }
        }else
        {
            if(No_of_beef_burgers>b && No_of_chicken_burgers>b)
            {
                int  total_bun=( No_of_beef_burgers + No_of_chicken_burgers);
                int total_price=b/total_bun;
                printf("%d\n",total_price);
            }else if(No_of_beef_burgers>b && No_of_chicken_burgers<=b)
            {
                int no_of_beef= b/p;
                int total_price= (no_of_beef * h)+(f*c);
                printf("%d\n",total_price);
            }else if(No_of_beef_burgers<=b && No_of_chicken_burgers>b)
            {
                int no_of_chicken= b/f;
                int total_price= (p * h)+(no_of_chicken*c);
                printf("%d\n",total_price);
            }
        }
    }
return 0;
}
