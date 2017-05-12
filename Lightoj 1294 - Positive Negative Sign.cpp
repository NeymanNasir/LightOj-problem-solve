#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    long long int cases, caseno = 0, n, m, sum;
    scanf("%lld",&cases);

    while(cases--){
        scanf("%lld %lld", &n, &m);

        sum = (n/2)*m;

        printf("Case %lld: %lld\n", ++caseno, sum);
    }
    return 0;
}
