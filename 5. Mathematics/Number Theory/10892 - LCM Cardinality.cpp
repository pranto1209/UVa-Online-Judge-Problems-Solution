#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll lcm (ll a, ll b)
{
    return (a * b) / __gcd(a,b);
}
int main()
{
    ll n;
    while(cin>>n && n){
        vector<ll>divisor;
        for(ll i=1; i*i<=n; i++){
            if(i*i==n) divisor.push_back(i);
            else if(n%i==0){
                divisor.push_back(i);
                divisor.push_back(n/i);
            }
        }
        sort(divisor.begin(), divisor.end());
        ll ans = divisor.size();
        for(ll i=1; i+2<divisor.size(); i++){
            for(ll j=i+1; j+1<divisor.size(); j++){
                if(lcm(divisor[i], divisor[j]) == n) ans++;
            }
        }
        cout<<n<<" "<<ans<<endl;
    }
}
