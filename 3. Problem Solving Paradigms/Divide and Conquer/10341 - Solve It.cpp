#include<bits/stdc++.h>
using namespace std;
double p, q, r, s, t, u;
double f(double x)
{
    return p*exp(-x) + q*sin(x) + r*cos(x) + s*tan(x) + t*x*x + u;
}
int main()
{
    while(cin>>p>>q>>r>>s>>t>>u){
        double lo=0.0, hi=1.0;
        if(f(lo)*f(hi)>0) puts("No solution");
        else{
            for(int i=1; i<=50; i++){
                double mid = (lo+hi)/2;
                if(f(mid)>0) lo=mid;
                else hi=mid;
            }
            printf("%.4f\n", lo);
        }
    }
}
