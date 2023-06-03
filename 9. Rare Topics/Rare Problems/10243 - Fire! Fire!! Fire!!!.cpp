#include<bits/stdc++.h>
using namespace std;
#define maxn 10001
int dp[maxn][2], par[maxn];
vector<int>g[maxn];
int mvc(int u, bool isGuard)
{
    if(dp[u][isGuard]!=-1) return dp[u][isGuard];
    int sum = isGuard;
    for(int v: g[u]){
        if(v!=par[u]){
            par[v]=u;
            if(isGuard==0) sum += mvc(v, true);
            else sum += min(mvc(v, true), mvc(v, false));
        }
    }
    return dp[u][isGuard] = sum;
}
int main()
{
    int n;
    while(cin>>n && n){
        memset(dp, -1, sizeof dp);
        for(int i=1; i<=n; i++) g[i].clear(), par[i]=0;
        for(int u=1; u<=n; u++){
            int x, v;
            cin>>x;
            while(x--){
                cin>>v;
                g[u].push_back(v);
            }
        }
        int ans = max(1, min(mvc(1, true), mvc(1, false)));
        cout<<ans<<endl;
    }
}
