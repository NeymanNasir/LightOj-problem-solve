#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

#define PI 2*acos(0.0)
int main()
{
    int T,i;
    double r,diameter,square_area,circle_area,sub_area;
    scanf("%d",&T);
    for(i=1;i<=T;i++){
        scanf("%lf",&r);
        diameter=2*r;
        square_area=diameter*diameter;
        circle_area=PI*r*r;

        sub_area=square_area-circle_area;

        printf("Case %d: %.2lf\n",i,sub_area);
    }
}
