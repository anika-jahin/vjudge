#include<stdio.h>
int main()
{
    int T,no_of_bun,chicken,beef,hamburger,chickenBurger;
    scanf("%d",&T);
    for(int i=1;i<=T;i++)
    {
        int total_price=0;
        scanf("%d %d %d",&no_of_bun,&beef,&chicken);
        scanf("%d %d",&hamburger,&chickenBurger);
        if(hamburger>chickenBurger)
        {
            while(no_of_bun>1 && beef>0)
            {
                total_price += hamburger;
                no_of_bun = no_of_bun-2;
                beef--;
            }
            while(no_of_bun>1 && chicken>0)
            {
                total_price += chickenBurger;
                no_of_bun = no_of_bun-2;
                chicken--;
            }
        }else
        {
            while(no_of_bun>1 && chicken>0)
            {
                total_price += chickenBurger;
                no_of_bun = no_of_bun-2;
                chicken--;
            }
             while(no_of_bun>1 && beef>0)
            {
                total_price += hamburger;
                no_of_bun = no_of_bun-2;
                beef--;
            }
        }
        printf("%d\n",total_price);
    }
    return 0;
}
