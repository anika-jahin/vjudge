#include<stdio.h>
int main()
{
    int T,my_position,Lift_position;
    scanf("%d",&T);
    for(int i=1;i<=T;i++)
    {
        scanf("%d %d",&my_position,&Lift_position);
        int floor,ground,time;
        if(my_position!=0 && my_position!=Lift_position)
        {
            int floor,ground,time;
            if(my_position>Lift_position)
            {
                floor=my_position - Lift_position;
                ground=my_position-0;
                time=(floor*4)+(ground*4)+19;
                printf("Case %d: %d\n",i,time);
            }else
            {
                 floor=Lift_position - my_position;
                 ground=my_position-0;
                time=(floor*4)+(ground*4)+19;
                printf("Case %d: %d\n",i,time);
            }
        }else if(my_position!=0 && my_position==Lift_position)
        {
            ground=my_position-0;
                time=(ground*4)+19;
                printf("Case %d: %d\n",i,time);
        }
    }
    return 0;
}
