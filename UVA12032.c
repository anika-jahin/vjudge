#include <stdio.h>
int main() {
    int T,Case=0;
    scanf("%d", &T);

    while(T--)
    {

        int n;
        scanf("%d", &n);

        int heights[100000]={};
        for (int j = 1; j <=n; j++) {
            scanf("%d", heights+j);
        }

        int k = 0,a;

        for (int j = 1; j <= n; j++) {
            int distance = heights[j] - heights[j - 1];
            if (distance > k) {
                k =distance;
            }
        }
            a=k;
            for(int j=1;j<=n;j++)
            {
                if((heights[j] - heights[j - 1])==k)
                {
                    k--;
                }else if((heights[j] - heights[j - 1])>k)
                {
                    a++;
                    break;
                }
            }

        printf("Case %d: %d\n", ++Case, a);
    }

    return 0;
}
