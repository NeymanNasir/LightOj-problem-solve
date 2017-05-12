#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int main()
{
    int cases, caseno = 0, x1, y1, x2, y2, M, x, y, i;

    scanf("%d",&cases);
    while(cases--){
        scanf("%d %d %d %d",&x1, &y1, &x2, &y2);
        scanf("%d", &M);
         printf("Case %d:\n",++caseno);
        for(i = 0; i < M; i++){
            scanf("%d %d",&x, &y);
            if(x >=  x1 && x <= x2  && y >= y1 && y <= y2)
                printf("Yes\n");
            else
                printf("No\n");
        }
    }
    return 0;
}
