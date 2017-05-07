#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int main()
{
    int cases,caseno=0;
    long long int s,i,c,r;
    scanf("%d",&cases);
    while(cases--){
        scanf("%lld",&s);

        i = ceil(sqrt(s));     //smallest integer greater or equal s

        if( i & 1 ){
            if(i*i - s < i){
                c = i*i - s + 1;
                r = i;
            }
            else {
                c = i;
                r = s - ((i-1)*(i-1));
            }
        }
        else{
            if( i*i - s < i){
                c = i;
                r = i*i - s + 1;
            }
            else{
                c = s - ((i-1)*(i-1));
                r = i;
            }
        }

        printf("Case %d: %lld %lld\n",++caseno,c,r);
    }

    return 0;
}
