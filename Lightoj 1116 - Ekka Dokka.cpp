#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int main()
{
    long long int cases, caseno = 0, d_f_s, test, N, M, lim;
    scanf("%lld", &cases);

    while(cases--){
        scanf("%lld", &d_f_s);
        test  = 0;
        N = 0;
        lim = d_f_s/2;
        for(M = 2; M <= lim ; M*= 2){
            if(d_f_s % M == 0){
                N = d_f_s / M;

                if(N % 2 == 1){
                    test = 1;
                    break;
                }
            }
        }

        if(test == 1)
            printf("Case %lld: %lld %lld\n", ++caseno, N, M);
        else
            printf("Case %lld: Impossible\n", ++caseno);
    }
    return 0;
}
