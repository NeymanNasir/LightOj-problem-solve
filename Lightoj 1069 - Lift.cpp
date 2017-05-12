#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    int cases, caseno = 0, m_p, l_p, seconds;

    scanf("%d",&cases);
    while(cases--){
        scanf("%d %d", &m_p, &l_p);

        if(l_p>=m_p)
            seconds = (l_p * 4)+ 10 + 9;
        else
            seconds = (m_p * 4)+ ((m_p - l_p) * 4) + 10 + 9;

        printf("Case %d: %d\n",++caseno, seconds);

    }

    return 0;
}
