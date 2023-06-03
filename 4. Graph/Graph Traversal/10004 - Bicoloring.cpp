#include<bits/stdc++.h>
using namespace std;
vector<int>g[201];
bool isBicolorable(int n, int src)
{
    queue<int>q;
    q.push(src);
    int color[n];
    for(int i=0; i<n; i++) color[i]=-1;
    color[src]=1;
    while(!q.empty()){
        int u=q.front();
        q.pop();
        for(int i=0; i<g[u].size(); i++){
            int v=g[u][i];
            if(color[v]==-1){
                if(color[u]==1) color[v]=0;
                else color[v]=1;
                q.push(v);
            }
            else if(color[v]==color[u]) return false;
        }
    }
    return true;
}
int main()
{
    int n, l;
    while(cin>>n, n){
        cin>>l;
        for(int i=1; i<=l; i++){
            int u, v;
            cin>>u>>v;
            g[u].push_back(v);
            g[v].push_back(u);
        }
        if(isBicolorable(n, 0)) cout<<"BICOLORABLE.\n";
        else cout<<"NOT BICOLORABLE.\n";
        for(int i=0; i<201; i++) g[i].clear();
    }
}
