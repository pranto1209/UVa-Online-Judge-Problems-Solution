#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll powmod(ll a, ll b, ll mod)
{
    ll res=1;
    while(b>0){
        if(b&1) res=res*a%mod;
        a=a*a%mod;
        b>>=1;
    }
    return res;
}
int main()
{
    int c, t;
    while(cin>>c && c){
        t=c;
        while(t--){
            ll x, y, n;
            cin>>x>>y>>n;
            ll ans = powmod(x, y, n);
            cout<<ans<<"\n";
        }
    }
}
