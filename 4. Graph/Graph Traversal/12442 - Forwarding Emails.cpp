#include<bits/stdc++.h>
using namespace std;
vector<int>g[50001];
int cnt, vis[50001];
void dfs(int u, int mrk)
{
    vis[u]=mrk;
    for(int i=0; i<g[u].size(); i++){
        int v=g[u][i];
        if(vis[v]!=mrk){
            cnt++;
            dfs(v, mrk);
        }
    }
}
int main()
{
    int t;
    cin>>t;
    for(int i=1; i<=t; i++){
        memset(vis, 0, sizeof(vis));
        int n, u, v, idx, mrk=1, mx=0;
        cin>>n;
        for(int i=1; i<=n; i++){
            cin>>u>>v;
            g[u].push_back(v);
        }
        for(int i=1; i<=n; i++){
            cnt=0;
            if(vis[i]==0){
                dfs(i, mrk);
                mrk++;
                if(mx<cnt){
                    idx=i;
                    mx=cnt;
                }
            }
        }
        printf("Case %d: %d\n", i, idx);
        for(int i=0; i<=n; i++) g[i].clear();
    }
}
