#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    int cases, caseno = 0, one;
    long long n, rem;

    scanf("%d", &cases);
    while(cases--){
        scanf("%lld", &n);

        one = 0;
        while( n != 0 ){

            rem = n % 2;

            if( rem == 1) one++;

            n /= 2;
        }

        if( one & 1) printf("Case %d: odd\n", ++caseno);
        else printf("Case %d: even\n", ++caseno);

    }
    return 0;
}
