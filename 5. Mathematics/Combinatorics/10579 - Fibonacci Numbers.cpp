#include<bits/stdc++.h>
using namespace std;
string add(string a,string b)
{
    if(a.size()<b.size()) swap(a, b);
    string c;
    int n=a.size(), t=0;
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    for(int i=0; i<n; i++){
        if(i>=b.size()) t+=(a[i]-'0');
        else t+=(a[i]-'0')+(b[i]-'0');
        c+=(t%10+'0');
        t/=10;
    }
    if(t) c+=(t+'0');
    reverse(c.begin(), c.end());
    return c;
}
int main()
{
    string dp[5001];
    int n;
    dp[0]="0"; dp[1]="1";
    for(int i=2; i<=5000; i++) dp[i]=add(dp[i-1], dp[i-2]);
    while(cin>>n) cout<<dp[n]<<"\n";
}
