#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    int T,i,N,rev,k,num;
    scanf("%d",&T);
    for(i=1;i<=T;i++){
        scanf("%d",&N);
        k=N;   //N is assigned to another variable
        if(N==0)printf("Case %d: Yes\n",i);
        else{
            rev=0;
        while(N>0){
            num=rev*10;
            rev=N%10;
            num=num+rev;       //here I found the reverse of N
            rev=num;
            N=N/10;
        }
        if(num==k)printf("Case %d: Yes\n",i);
        else printf("Case %d: No\n",i);
    }
  }
    return 0;
}
//yes! I implement it.........
