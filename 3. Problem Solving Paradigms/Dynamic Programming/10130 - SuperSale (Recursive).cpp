#include<bits/stdc++.h>
using namespace std;
#define maxn 1001
int n, g, weight[maxn], price[maxn], dp[maxn][maxn];
int knapsack(int i, int w)
{
    if(w<0) return INT_MIN;
    if(i>n || w==0) return 0;
    if(dp[i][w]!=-1) return dp[i][w];
    int ret1 = price[i] + knapsack(i+1, w-weight[i]);
    int ret2 = knapsack(i+1, w);
    return dp[i][w] = max(ret1, ret2);
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        memset(dp, -1, sizeof(dp));
        int ks, sum=0, w[101];
        cin>>n;
        for(int i=1; i<=n; i++) cin>>price[i]>>weight[i];
        cin>>g;
        for(int i=1; i<=g; i++){
            cin>>w[i];
            ks=knapsack(1, w[i]);
            sum+=ks;
        }
        cout<<sum<<endl;
    }
}
