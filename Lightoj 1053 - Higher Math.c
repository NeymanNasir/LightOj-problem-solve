#include<stdio.h>

int main()
{
    int cases, caseno = 0, a, b, c;
    scanf("%d",&cases);

    while(cases--){
        scanf("%d %d %d",&a, &b, &c);

        if((c*c) == (a*a) + (b*b) || (a*a) == (c*c) + (b*b) || (b*b) == (a*a) + (c*c))
            printf("Case %d: yes\n",++caseno);
        else
            printf("Case %d: no\n",++caseno);
    }
    return 0;
}
