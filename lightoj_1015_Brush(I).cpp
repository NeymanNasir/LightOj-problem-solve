#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    int T,N,i,j,sum,num;
    scanf("%d",&T);
    for(i=1;i<=T;i++){
        scanf("%d",&N);
        for(j=0,sum=0;j<N;j++){
            scanf("%d",&num);
            if(num<0)num=0;
            sum+=num;
        }
        printf("Case %d: %d\n",i,sum);
    }
    return 0;
}
