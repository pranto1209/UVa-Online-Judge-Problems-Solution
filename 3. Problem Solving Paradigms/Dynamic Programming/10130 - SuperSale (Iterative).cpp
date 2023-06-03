#include<bits/stdc++.h>
using namespace std;
int n, g, w, weight[1001], price[1001], dp[1001][1001];
int knapsack()
{
    for(int i=1; i<=n; i++){
        for(int j=0; j<=w; j++){
            if(j-weight[i]>=0) dp[i][j] = max(dp[i-1][j], price[i] + dp[i-1][j-weight[i]]);
            else dp[i][j] = dp[i-1][j];
        }
    }
    return dp[n][w];
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        memset(dp, 0, sizeof(dp));
        int ks, sum=0;
        cin>>n;
        for(int i=1; i<=n; i++) cin>>price[i]>>weight[i];
        cin>>g;
        for(int i=1; i<=g; i++){
            cin>>w;
            ks=knapsack();
            sum+=ks;
        }
        cout<<sum<<endl;
    }
}
